package com.example.ndk.methods;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.widget.TextView;

public class MainActivity extends Activity {

	private TextView textView1;
	private TextView textView2;
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
	    
		textView1 = (TextView) findViewById(android.R.id.text1);
		textView2 = (TextView) findViewById(android.R.id.text2);
		callNativeMethods();
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}
	
	private void callNativeMethods(){
		int a = 10;
		int b = 100;
		int c = NativeAdd(a, b);
		textView1.setText(a + "+" + b + "=" +c );
		
		c = NativeMulticate(a, b);
		
		textView2.setText(a + "*" + b + "=" +c );
	}
	
	
	private  native int NativeAdd(int a, int b);
	private  native int NativeMulticate(int a, int b);
	
	static{
		System.loadLibrary("native");
	}

}
