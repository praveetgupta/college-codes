import javax.swing.*;
import java.awt.event.*;

public class exp1_q1 implements KeyListener {
    JFrame jf = new JFrame("Key Listener");
    JLabel jl = new JLabel();

    public exp1_q1() {
        jf.setTitle("Keyboard Event");
        jf.setSize(500, 500);
        jf.setLayout(null);
        jf.setVisible(true);
        jl.setBounds(50, 50, 100, 30);
        jf.add(jl);
        jf.addKeyListener(this);
    }

    @Override
    public void keyTyped(KeyEvent e) {
        jl.setText("Key Typed");
    }

    @Override
    public void keyPressed(KeyEvent e) {
        jl.setText("Key Pressed");
        int key = e.getKeyCode();
        switch (key) {
            case KeyEvent.VK_RIGHT:
                jl.setText("Right");
                break;
            case KeyEvent.VK_LEFT:
                jl.setText("Left");
                break;
            case KeyEvent.VK_UP:
                jl.setText("Up");
                break;
            case KeyEvent.VK_DOWN:
                jl.setText("Down");
                break;

            default:
                break;
        }
    }

    public void keyReleased(KeyEvent e) {
        jl.setText("Key Released");
    }

    public static void main(String[] args) {
        new exp1_q1();
    }
}
