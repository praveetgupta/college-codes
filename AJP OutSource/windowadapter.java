import javax.swing.*;
import java.awt.event.*;

public class windowadapter extends WindowAdapter{
    JFrame jf=new JFrame();
    JLabel jl=new JLabel();
    public windowadapter()
    {
        jf.setLayout(null);
        jf.setVisible(true);
        jf.setSize(500,500);
        jl.setBounds(10, 10, 200, 20);
        jf.add(jl);
        jf.addWindowListener(this);
    }
    public void windowClosing(WindowEvent e)
    {
        jl.setText("Window Closing");
    }
    public void windowOpened(WindowEvent e)
    {
        jl.setText("Window Opened");
    }
    public static void main(String[] args) {
        new windowadapter();
    }
}
