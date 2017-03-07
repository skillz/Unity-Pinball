using UnityEngine;
using System;

public class SkillzDelegate : MonoBehaviour {

	// This method is called when a user starts a match from Skillz
	public void SkillzMatchStarted() {
		// implement me
		Application.LoadLevel("Level1");
	}

	// This method is called when a user exits the Skillz experience (via Menu -> Exit)
	public void SkillzExited() {
		// implement me
		Application.LoadLevel("StartMenu");
	}
}
