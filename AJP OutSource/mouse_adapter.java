import javax.swing.*;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.*;

public class mouse_adapter extends MouseAdapter{
    JFrame jf=new JFrame();
    public mouse_adapter()
    {
        jf.setLayout(null);
        jf.setVisible(true);
        jf.setSize(500,500);
        jf.addMouseListener(this);
    }
    public void mouseClicked(MouseEvent e)
    {
        Graphics g=jf.getGraphics();
        g.setColor(Color.BLUE);
        g.fillOval(e.getX(), e.getY(), 40, 40);
    }
    public static void main(String[] args) {
        new mouse_adapter();
    }
}
