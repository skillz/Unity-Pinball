using SkillzSDK;
using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class GameController : MonoBehaviour, SkillzMatchDelegate
{
    private const string GameSceneName = "Level1";

    public void OnMatchWillBegin(Match matchInfo)
    {
        SceneManager.LoadScene(GameSceneName);
    }

    public void OnSkillzWillExit()
    {
        // This method is intentionally not implemented
        // as we want to remain in the Skillz UI for
        // the lifetime of the game.
    }
}
