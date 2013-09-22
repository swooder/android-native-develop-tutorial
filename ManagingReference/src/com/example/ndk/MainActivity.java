package com.example.ndk;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
    private native void referenceAssignAndNew(String p);
    
    private native void localReference(String p, boolean p1);
    
    private native void globalReference(String p, boolean p1);
    
    private native void weekReference(String p, boolean p1);
    
    static {
    	System.loadLibrary("native");
    }
    
}
