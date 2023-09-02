import javax.swing.*;
import java.awt.event.*;

public class KeyDemo extends JFrame implements KeyListener {
    JLabel l1;
    JTextArea ta;

    KeyDemo() {
        l1 = new JLabel(" Press any Key");
        l1.setBounds(100, 100, 100, 50);
        ta = new JTextArea();
        ta.setBounds(100, 250, 100, 150);
        ta.addKeyListener(this);
        add(l1);
        add(ta);
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
    }

    public void keyPressed(KeyEvent e) {
        l1.setText("Key is Pressed");
    }

    public void keyReleased(KeyEvent e) {
        l1.setText("Key is Released");
    }

    public void keyTyped(KeyEvent e) {
        l1.setText("Key is Typed");
    }

    public static void main(String args[]) {
        new KeyDemo();
    }
}
