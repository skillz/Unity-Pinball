using UnityEngine;
using System.Collections;

public class BallSpawner : MonoBehaviour {

    public GameObject spawnSprite;
    public float minPos = -2.6f;
    public float maxPos = 2.6f;
    public float height = 4.5f;
    public float delayTimer = 2f;
    float timer;

    // Use this for initialization
    void Start () {
        timer = delayTimer;
    }

	// Update is called once per frame
	void Update () {
        timer -= Time.deltaTime;
        if (timer <= 0) {

            #if UNITY_ANDROID
            Instantiate(spawnSprite, new Vector2(Skillz.Random.Range(minPos, maxPos), height), Quaternion.identity);
            #elif UNITY_IOS
            Instantiate(spawnSprite, new Vector2(SkillzSDK.Api.Random.Range(minPos, maxPos), height), Quaternion.identity);
            #endif
            timer = delayTimer;
        }
    }


}
