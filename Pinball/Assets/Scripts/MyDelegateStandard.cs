﻿using System.Collections.Generic;

class MyDelegateStandard : SkillzSDK.SkillzDelegateStandard
{
	public override void OnTournamentWillBegin(SkillzSDK.Match match)
	{
		Dictionary<string, string> myParams = match.GameParams;
		//Assume that on the Developer Portal, I gave each tournament type a "level"
		//Game Parameter whose value is the level to use for that match.
		UnityEngine.Application.LoadLevel("Level1");
	}
}