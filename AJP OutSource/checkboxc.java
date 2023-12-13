import javax.swing.*;
import java.awt.event.*;

public class checkboxc implements ItemListener{
    JFrame jf=new JFrame();
    JCheckBox c1=new JCheckBox("C");
    JCheckBox c2=new JCheckBox("C++");
    JCheckBox c3=new JCheckBox("Java");
    JLabel jl=new JLabel();

    public checkboxc()
    {
        jf.setLayout(null);
        jf.setVisible(true);
        jf.setSize(500,500);
        c1.setBounds(10,10,100,20);
        c2.setBounds(10,40,100,20);
        c3.setBounds(10,70,100,20);
        jl.setBounds(10,100,100,20);
        jf.add(c1);
        jf.add(c2);
        jf.add(c3);
        jf.add(jl);
        c1.addItemListener(this);
        c2.addItemListener(this);
        c3.addItemListener(this);
    }
    public void itemStateChanged(ItemEvent e)
    {
        if (e.getSource()==c1) 
        {
            if (c1.isSelected()) {
                jl.setText("C is selected");
            } else {
                jl.setText("C is unselected");
            }
        }
        else if (e.getSource()==c2) {
            if (c2.isSelected()) {
                jl.setText("C++ is selected");
            } else {
                jl.setText("C++ is unselected");
            }
        }
        else if (e.getSource()==c3) 
        {
            if (c3.isSelected()) {
                jl.setText("Java is selected");
            } else {
                jl.setText("Java is unselected");
            }
        }
    }
    public static void main(String[] args) {
        new checkboxc();
    }
}
