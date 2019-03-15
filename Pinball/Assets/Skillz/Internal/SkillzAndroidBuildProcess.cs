#if UNITY_EDITOR && UNITY_ANDROID
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build;
using System.IO;
using System;


class SkillzAndroidPreProcessBuild : IPreprocessBuild
{
	public int callbackOrder { get { return 0; } }
	public void OnPreprocessBuild(BuildTarget target, string path)
	{
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject) {
			UpdateUnityGradleVersion();
			UnityEngine.Debug.Log("Finished PreProcess Script");
		}
	}

	private static void UpdateUnityGradleVersion()
	{
		//Copy the old Gradle version inside Skillz/Editor/Build/OldGradleVersion/lib/ for safekeeping
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject)
		{
			CopyOldGradleVersion();
			try
			{
				FileUtil.DeleteFileOrDirectory(Directories.UnityRootGradleDirectory);
				FileUtil.CopyFileOrDirectory(Directories.SkillzLibDirectory, Directories.UnityGradleLibDirectory);
			}
			catch (Exception err)
			{
				EditorUtility.DisplayDialog("Android PreProcessBuild Failed! Contact integrations@skillz.com to help debug your issue", err.Message, "OK");
			}

			UnityEngine.Debug.Log("Finished Updating Gradle Version");
		}
	}

	private static void CopyOldGradleVersion()
	{
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject)
		{
			if (!Directory.Exists(Directories.TempGradleLibDirectory))
			{
				Directory.CreateDirectory(Directories.TempGradleLibDirectory);
			}

			var unityPath = EditorApplication.applicationPath.ToString();
			if (Directory.GetFiles(Directories.TempGradleLibDirectory).Length <= 0)
			{
				var info = new DirectoryInfo(Directories.UnityGradleLibDirectory);
				var fileInfo = info.GetFiles();
				foreach (string file in System.IO.Directory.GetFiles(Directories.UnityGradleLibDirectory))
				{
					var currentFile = Path.GetFileName(file);
					FileUtil.CopyFileOrDirectory(file, Path.Combine(Directories.TempGradleLibDirectory, currentFile));
				}

				FileUtil.CopyFileOrDirectory (Directories.UnityGradlePluginsDirectory, Directories.TempGradlePluginsDirectory);
				UnityEngine.Debug.Log("Finished Copying the old Gradle Version");
			}
		}
	}
}

class SkillzAndroidPostProcessBuild : IPostprocessBuild
{
	public int callbackOrder { get { return 0; } }
	public void OnPostprocessBuild(BuildTarget target, string path)
	{
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject) {
			RevertBackGradleVersion();
			UnityEngine.Debug.Log("Finished PostProcess Script");
		}
	}

	private static void RevertBackGradleVersion()
	{
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject)
		{
			try
			{
				FileUtil.DeleteFileOrDirectory(Directories.UnityGradleLibDirectory);
				FileUtil.CopyFileOrDirectory(Directories.TempGradleLibDirectory, Directories.UnityGradleLibDirectory);
				FileUtil.DeleteFileOrDirectory(Directories.TempGradleDirectory);
			}
			catch (Exception err)
			{
				EditorUtility.DisplayDialog("Android PostProcessBuild Failed! Contact integrations@skillz.com to help debug your issue", err.Message, "OK");
			}

			UnityEngine.Debug.Log("Finished Reverting Gradle Version");
		}
	}
}

class SkillzAndroidProcessScene : IProcessScene
{
	public int callbackOrder { get { return 0; } }

	private GameObject SkillzDelegateGameObject;
	private SkillzAbstractDelegate SkillzDelegateScript;
	private static string androidManifestPath = "Plugins/Android/AndroidManifest.xml";

	public void OnProcessScene(UnityEngine.SceneManagement.Scene scene)
	{
		SkillzDelegateGameObject = GameObject.Find("SkillzDelegate");

		if (SkillzDelegateGameObject != null) {
			SkillzDelegateScript = SkillzDelegateGameObject.GetComponent<SkillzAbstractDelegate>();
			AddSkillzMetaData("skillz_game_id", SkillzDelegateScript.GameID.ToString());
			if (SkillzDelegateScript.SkillzEnvironment.ToString() == "Sandbox")
			{
				AddSkillzMetaData("skillz_production", "false");
			}
			else
			{
				AddSkillzMetaData("skillz_production", "true");
			}
		}
	}

	public void AddSkillzMetaData(string skillzElement, string skillzValue)
	{
		var androidManifestOutputFile = Path.Combine(Application.dataPath, androidManifestPath);
		XmlDocument doc = new XmlDocument();
		doc.Load(androidManifestOutputFile);

		XmlElement root = doc.DocumentElement;
		XmlNode applicationNode = root.SelectSingleNode("//application");
		XmlNode firstNode = root.SelectNodes("//application/meta-data").Item(1);

		XmlNamespaceManager nsmgr = new XmlNamespaceManager(doc.NameTable);
		nsmgr.AddNamespace("a", "http://schemas.android.com/apk/res/android");

		XmlElement skillzXmlElement= (XmlElement)root.SelectSingleNode("//application/meta-data[@a:name='" + skillzElement + "']", nsmgr);
		XmlAttribute skillzXmlAttribute = (XmlAttribute)root.SelectSingleNode("//application/meta-data[@a:name='" + skillzElement + "']/@a:value", nsmgr);

		if (skillzXmlElement == null)
		{
			XmlElement newElement = doc.CreateElement("meta-data");
			newElement.SetAttribute("name", "http://schemas.android.com/apk/res/android", skillzElement);
			newElement.SetAttribute("value", "http://schemas.android.com/apk/res/android", skillzValue);
			applicationNode.InsertAfter(newElement, firstNode);
		}
		else
		{
			skillzXmlAttribute.Value = skillzValue;
		}
		doc.Save(androidManifestOutputFile);
	}
}

#endif
