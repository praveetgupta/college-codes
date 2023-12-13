import javax.swing.*;
import java.awt.event.*;

public class key_listener implements KeyListener{
    JFrame jf=new JFrame("Key Listener");
    JLabel jl=new JLabel();

    public key_listener()
    {
        jf.setLayout(null);
        jf.setSize(500, 500);
        jf.setVisible(true);
        jl.setBounds(20, 20, 200, 200);
        jf.add(jl);
        jf.addKeyListener(this);
    }
    public void keyPressed(KeyEvent e)
    {
        int key=e.getKeyCode();
        switch (key) {
            case KeyEvent.VK_UP:
                jl.setText("Up arrow");
                break;
            case KeyEvent.VK_DOWN:
                jl.setText("Down Arrow");
                break;
            case KeyEvent.VK_LEFT:
                jl.setText("Left Arrow");
                break;
            case KeyEvent.VK_RIGHT:
            jl.setText("Right arrow");
            break;
        }
    }
    public void keyReleased(KeyEvent e)
    {
        jl.setText("Key Released");
    }
    public void keyTyped(KeyEvent e)
    {
        jl.setText("Key Typed");
    }
    public static void main(String[] args) {
        new key_listener();
    }
}