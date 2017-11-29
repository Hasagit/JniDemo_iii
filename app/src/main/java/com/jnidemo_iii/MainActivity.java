package com.jnidemo_iii;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView result=(TextView)findViewById(R.id.result);
        JniUntil until=new JniUntil();
        int a=until.askByJni();
        Log.e("a","");
        result.setText(""+a);
    }

}
