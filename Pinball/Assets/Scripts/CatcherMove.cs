using UnityEngine;
using System.Collections;

public class CatcherMove : MonoBehaviour {

    public float catcherSpeedIndex = 500.0f;
    public float minPos = -2.2f;
    public float maxPos = 2.2f;
    public float catcherSpeedAndroid;
    public float catcherSpeedPc = 10.0f;
    public float catcherSpeedAndroidFast;

    Vector3 position;

    bool currentPlatformAndroidOrIOS = false;

    Rigidbody2D rb;

    void Awake()
    {

        rb = GetComponent<Rigidbody2D>();

#if UNITY_ANDROID || UNITY_IOS
	currentPlatformAndroidOrIOS = true;
#else
	currentPlatformAndroidOrIOS = false;
#endif
    }

    void Start () 
    {
      position = transform.position;

	if (currentPlatformAndroidOrIOS == true)
        {
            Debug.Log("Android or iOS");
        }
        else
        {
            Debug.Log("Windows");
        }
	}
	
	void Update () {

	if (currentPlatformAndroidOrIOS == true)
        {
            AccelerometerMove();
        }
        else
        {
            position.x += Input.GetAxis("Horizontal") * catcherSpeedPc * Time.deltaTime;
        
            position.x = Mathf.Clamp(position.x, minPos, maxPos);

            transform.position = position;

        }

        position = transform.position;
        position.x = Mathf.Clamp(position.x, minPos, maxPos);
        transform.position = position;
    }

    // Accelerometer move function for Android
    public void AccelerometerMove()
    {
        catcherSpeedAndroid = Input.acceleration.x;
        catcherSpeedAndroidFast = catcherSpeedAndroid * 1.3f;

        if (catcherSpeedAndroid < -0.02f && catcherSpeedAndroid > -0.1f)
        {
            MoveLeft();
        }
        else if (catcherSpeedAndroid > 0.02f && catcherSpeedAndroid < 0.1f)
        {
            MoveRight();
        }
        else if (catcherSpeedAndroid <= -0.1f)
        {
            MoveLeftFast();
        }
        else if (catcherSpeedAndroid >= 0.1f)
        {
            MoveRightFast();
        }
        else
        {
            SetVelocityZero();
        }

    }


    // controller functions for Android
    public void MoveLeft()
    {
        rb.velocity = new Vector2(catcherSpeedAndroid * catcherSpeedIndex, 0);
    }

    public void MoveRight()
    {
        rb.velocity = new Vector2(catcherSpeedAndroid * catcherSpeedIndex, 0);
    }

    public void MoveLeftFast()
    {
        rb.velocity = new Vector2(catcherSpeedAndroidFast * catcherSpeedIndex, 0);
    }

    public void MoveRightFast()
    {
        rb.velocity = new Vector2(catcherSpeedAndroidFast * catcherSpeedIndex, 0);
    }

    public void SetVelocityZero()
    {
        rb.velocity = Vector2.zero;
    }
}
