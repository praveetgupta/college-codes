import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class item_event_practice extends Frame implements ItemListener {
    JCheckBox c1 = new JCheckBox("JAVA");
    JCheckBox c2 = new JCheckBox("DS");
    JCheckBox c3 = new JCheckBox("CSS");
    JLabel jl = new JLabel();

    public item_event_practice() {
        setTitle("item event !!");
        setSize(500, 500);
        setLayout(null);
        setVisible(true);
        c1.setBounds(100, 120, 80, 30);
        c2.setBounds(100, 200, 80, 30);
        c3.setBounds(100, 280, 80, 30);
        jl.setBounds(200, 100, 120, 120);
        add(c1);
        add(c2);
        add(c3);
        add(jl);
        c1.addItemListener(this);
        c2.addItemListener(this);
        c3.addItemListener(this);
    }

    public void itemStateChanged(ItemEvent e) {
        if (e.getSource() == c1) {
            jl.setText("JAVA IS SELECTED !!");
        } else if (e.getSource() == c2) {
            jl.setText("DS IS SELECTED !!");
        } else if (e.getSource() == c3) {
            jl.setText("CSS IS SELECTED !!");
        }
    }

    public static void main(String args[]) {
        new item_event_practice();
    }
}