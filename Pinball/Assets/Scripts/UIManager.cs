using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {

    Scene currentScene;

    public Text scoreText;
    public Text timeLeftText;
    public Text highScoreText;
    public Text gameOverScoreText;
    public Text gameOverComboText;

    public GameObject catchText;
    public int uiScore;
    public int combos;

    public float previousTime;
    bool catchTextActive;

    public GameObject collector;
    public GameObject bumpers;
    public int timeLeft;
    bool gameOver;

    public Vector4 ballColor; 

    void Start () {
        previousTime = 0;
        gameOver = false;
        Time.timeScale = 1;
        currentScene = SceneManager.GetActiveScene();
        uiScore = 0;
        combos = 0;
        InvokeRepeating("TimeCount", 1.0f, 1.0f);
        highScoreText.text = "Highscore: " + PlayerPrefs.GetInt("HighScore");
    }
	
	void Update () {
        if (gameOver)
        {
            return;
        }

        scoreText.text = "Score: " + uiScore;
        timeLeftText.text = "Time: " + timeLeft;

        if ((Time.time - previousTime) < 1f && catchTextActive == true)
        {
            float colorChangeIndex = (Time.time - previousTime);
            catchText.GetComponent<Text>().color = Color.Lerp(new Vector4(0, 0, 0, 0), ballColor, colorChangeIndex);
        }
        else if ((Time.time - previousTime) >= 2f && catchTextActive == true)
        {
            catchText.SetActive(false);
            catchTextActive = false;
        }

        if (timeLeft == 0)
        {
            gameOverActivate();
        }
    }

    public void scoreUpdate()
    {
        if (gameOver)
        {
            return;
        }

        uiScore += collector.GetComponent<Collect>().catcherScore;
        catchText.GetComponent<Text>().text = "+ " + collector.GetComponent<Collect>().catcherScore;
        catchText.SetActive(true);
        catchTextActive = true;
        previousTime = Time.time;
        ballColor = collector.GetComponent<Collect>().ballColor;

        if (SkillzCrossPlatform.IsMatchInProgress())
        {
            SkillzCrossPlatform.UpdatePlayersCurrentScore(uiScore);
        }
    }

    public void comboUpdate()
    {
        if (gameOver)
        {
            return;
        }

        combos++;
    }

    public void Forefit()
    {
        SkillzCrossPlatform.AbortMatch();
    }

    public void TimeCount()
    {
        if (gameOver == false)
        {
            timeLeft--;
        }
    }
    public void gameOverActivate()
    {
        gameOver = true;

        gameOverScoreText.text = "YOUR SCORE" + "\r\n" + uiScore;
        gameOverComboText.text = "YOUR COMBO" + "\r\n" + combos;
        gameOverScoreText.gameObject.SetActive(true);
        gameOverComboText.gameObject.SetActive(true);

        if (PlayerPrefs.GetInt("HighScore") < uiScore)
        {
            PlayerPrefs.SetInt("HighScore", uiScore);
        }

        if (SkillzCrossPlatform.IsMatchInProgress())
        {
            SkillzCrossPlatform.ReportFinalScore(uiScore);
        }
    }
}
