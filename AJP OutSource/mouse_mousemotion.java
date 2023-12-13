import javax.swing.*;
import java.awt.event.*;

public class mouse_mousemotion implements MouseListener,MouseMotionListener{
    JFrame jf=new JFrame();
    JLabel jl=new JLabel();

    public mouse_mousemotion()
    {
        jf.setLayout(null);
        jf.setSize(500, 500);
        jf.setVisible(true);
        jl.setBounds(20, 20, 200, 20);
        jf.add(jl);
        jf.addMouseListener(this);
        jf.addMouseMotionListener(this);
    }
    public void mouseMoved(MouseEvent e)
    {
        jl.setText("Mouse Moved");
    }
    public void mousePressed(MouseEvent e)
    {
        jl.setText("Mouse Pressed");
    }
    public void mouseClicked(MouseEvent e)
    {
        jl.setText("Mouse Clicked");
    }
    public void mouseReleased(MouseEvent e)
    {
        jl.setText("Mouse Released");
    }
    public void mouseEntered(MouseEvent e)
    {
        jl.setText("Mouse Entered");
    }
    public void mouseExited(MouseEvent e)
    {
        jl.setText("Mouse Exited");
    }
    public void mouseDragged(MouseEvent e)
    {
        jl.setText("Mouse Dragged !!");
    }
    public static void main(String[] args) {
        new mouse_mousemotion();
    }
}
