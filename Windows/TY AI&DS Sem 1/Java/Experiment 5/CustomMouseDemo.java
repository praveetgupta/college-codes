DONT USE THIS CODE

import java.awt.*;
import java.awt.event.*;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class CustomMouseDemo extends JFrame implements MouseListener, MouseMotionListener {
    JLabel infoLabel;

    CustomMouseDemo() {
        infoLabel = new JLabel();
        addMouseListener(this);
        addMouseMotionListener(this);
        infoLabel.setBounds(20, 50, 200, 20);
        add(infoLabel);
        setSize(500, 500);
        setLayout(null);
        setVisible(true);
    }

    public void mouseEntered(MouseEvent e) {
        infoLabel.setText("Mouse entered");
    }

    public void mouseExited(MouseEvent e) {
        infoLabel.setText("Mouse Exited");
    }

    public void mouseReleased(MouseEvent e) {
        infoLabel.setText("Mouse Released");
    }

    public void mouseMoved(MouseEvent e) {
        infoLabel.setText("Mouse moving ");
    }

    public void mouseDragged(MouseEvent e) {
        infoLabel.setText("Mouse dragged ");
    }

    public void mousePressed(MouseEvent e) {
        infoLabel.setText("Mouse pressed");
    }

    @Override
    public void mouseClicked(MouseEvent e) {
        
    }

    public static void main(String[] args) {
        new CustomMouseDemo();
    }
}
