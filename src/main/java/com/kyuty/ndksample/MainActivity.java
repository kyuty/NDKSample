package com.kyuty.ndksample;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("HelloJni");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = (TextView) findViewById(R.id.tvForJni);
        tv.setText(getStringFromNative());

    }

    public native String getStringFromNative();

    public native void getAnotherString(int n,int[] nn, String str);
}
