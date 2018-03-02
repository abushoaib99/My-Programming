import java.applet.*;
import java.awt.*;

public class MyApplet extends Applet{


	Label l1,l2;
	TextField t1,t2;
	Button b1;
	public void init(){
		l1=new Label("First Number");
		l2=new Label("Second Number");
		t1=new TextField();
		t2=new TextField();
		b1=new Button("Add");
	}
}