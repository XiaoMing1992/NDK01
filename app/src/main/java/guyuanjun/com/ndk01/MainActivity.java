package guyuanjun.com.ndk01;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView tv;

//    static {
//        System.loadLibrary("jni-test");
//    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initView();
        initData();
    }

    private void initView(){
        tv = (TextView)findViewById(R.id.tv);
    }

    private void initData(){
        JniTest jniTest = new JniTest();
        tv.setText(jniTest.get());
       // set("hello world from JniTestApp");
    }

//    public native String get();
//    public native void set(String str);
}
