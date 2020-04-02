#if UNITY_EDITOR && UNITY_ANDROID
using System.Xml;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build;
using System.IO;

internal sealed class SkillzAndroidPreProcessBuild : IPreprocessBuild
{
	public int callbackOrder
	{
		get
		{
			return 0;
		} 
	}

	public void OnPreprocessBuild(BuildTarget target, string path)
	{
		if (EditorUserBuildSettings.exportAsGoogleAndroidProject)
		{
			return;
		}

		const string warningMessage = "The Skillz SDK does not support building an APK directly from Unity. Export your project to Android Studio when you need to build your APK.";

		EditorUtility.DisplayDialog(
			"Please Export To Android Studio",
			warningMessage,
			"OK"
		);

		Debug.LogWarning(warningMessage);
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
