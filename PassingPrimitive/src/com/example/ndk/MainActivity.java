package com.example.ndk;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        
        
        passBooleanReturnBoolean(true);
        passByteReturnByte((byte) 1);
        passCharReturnChar('a');
        passDoubleReturnDouble(1233.3424);
        passFloatReturnFloat(223.4f);
        passIntReturnInt(12);
        passLongReturnLong(123l);
        passShortReturnShort((short) 12);
    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
    
    private native boolean passBooleanReturnBoolean(boolean p);
    
    private native byte passByteReturnByte(byte p);
    
    private native char passCharReturnChar(char p);
    
    private native short passShortReturnShort(short p);
    
    private native int passIntReturnInt(int p);
    
    private native long passLongReturnLong(long p);
    
    private native float passFloatReturnFloat(float p);
    
    private native double passDoubleReturnDouble(double p);
    
    static{
    	System.loadLibrary("primitive");
    }
}
