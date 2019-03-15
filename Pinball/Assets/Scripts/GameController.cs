using SkillzSDK;
using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class GameController : MonoBehaviour, SkillzMatchDelegate
{
    private const string GameSceneName      = "Level1";
    private const string StartMenuSceneName = "StartMenu";

    public void OnMatchWillBegin(Match matchInfo)
    {
        // This method is called when a match is about to begin.
        // Remember to load the scene that represents actual gameplay!
        SceneManager.LoadScene(GameSceneName);
    }

    public void OnSkillzWillExit()
    {
        // This method is called when the Skillz UI is exiting.
        // The user can exit it via the hamburger menu in the
        // Skillz UI.
        SceneManager.LoadScene(StartMenuSceneName);
    }
}
