package com.skillz.unity.pinball;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;

import com.crashlytics.android.Crashlytics;
import com.skillz.activity.UnityGameActivity;

public class MyUnityGameActivity extends UnityGameActivity {
    @Override
    protected void onCreate(Bundle savedInstance) {
        super.onCreate(savedInstance);

        Log.d("Skillz", "Creating a button");

        // Programmatically adding a buton that will force a crash
        // to verify that the Firebase Console is receiving crash
        // reports.
        Button crashButton = new Button(this);
        crashButton.setText("Crash!");
        crashButton.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                // Force a crash
                Crashlytics.getInstance().crash();
            }
        });

        addContentView(crashButton, new ViewGroup.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT,
                ViewGroup.LayoutParams.WRAP_CONTENT));
    }
}
