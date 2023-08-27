import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class AEvent extends Frame implements ActionListener {
    JTextField tf;

    AEvent() {
        // create components
        tf = new JTextField();
        tf.setBounds(60, 50, 170, 20);
        JButton b = new JButton("click me");
        JButton b1 = new JButton("cancel");
        JButton b2 = new JButton("submit");
        b.setBounds(100, 120, 80, 30);
        b1.setBounds(100, 200, 80, 30);
        b2.setBounds(100, 280, 80, 30);
        // register listener
        b.addActionListener(this);// passing current instance
        b1.addActionListener(this);
        b2.addActionListener(this);
        // add components and set size, layout and visibility
        add(b);
        add(b1);
        add(b2);
        add(tf);
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand() == "click me")
            tf.setText("Welcome");
        else if (e.getActionCommand() == "cancel")
            tf.setText("cancelled");
        else
            tf.setText("submited");
    }

    public static void main(String args[]) {
        new AEvent();
    }
}
