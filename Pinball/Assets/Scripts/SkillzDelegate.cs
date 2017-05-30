using UnityEngine;
using System;


public class SkillzDelegate : UnityEngine.MonoBehaviour
{
	public void OnSkillzWillExit() {
		// When a User decides to exit out of the Skillz UI
		// implement me
		Application.LoadLevel("StartMenu");
	}

	public void OnSkillzLaunchCompleted() {
		// When Skillz has finished launching
		// implement me
	}

	public void OnMatchWillBegin() {
		// When a User is just about to start a match with Skillz
		// implement me	
		Application.LoadLevel("Level1");
	}

	public void SkillzMatchStarted() {
		// implement me		
		Application.LoadLevel("Level1");
	}

	public void OnMatchAborted() {
		// When a User decides to abort the match
		// implement me
	}

	public  void OnMatchCompleted() {
		// When a User finishes a match with Skillz
		// implement me
	}
}

