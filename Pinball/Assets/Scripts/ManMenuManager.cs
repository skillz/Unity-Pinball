using UnityEngine;

public class ManMenuManager : MonoBehaviour
{
    public void LaunchSkillz()
    {
        SkillzCrossPlatform.LaunchSkillz(new GameController());
    }

    public void Exit()
    {
        Application.Quit();
    }
}