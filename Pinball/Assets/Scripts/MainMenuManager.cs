using UnityEngine;

public sealed class MainMenuManager : MonoBehaviour
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
