import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class mouseEvent extends Frame implements MouseListener, MouseMotionListener {
    JLabel j1 = new JLabel();

    public mouseEvent() {
        setTitle("Mouse Event");
        setSize(750, 750);
        setLayout(null);
        setVisible(true);
        j1.setBounds(100, 100, 120, 20);
        add(j1);
        addMouseListener(this);
        addMouseMotionListener(this);
    }

    public void mouseDragged(MouseEvent e) {
        j1.setText("mouseDragged");
    }

    public void mouseMoved(MouseEvent e) {
        j1.setText("mouseMoved");
    }

    @Override
    public void mouseClicked(MouseEvent e) {
        j1.setText("mouseClicked");
    }

    public void mousePressed(MouseEvent e) {
        j1.setText("mousePressed");
    }

    public void mouseReleased(MouseEvent e) {
        j1.setText("mouseReleased");
    }

    public void mouseEntered(MouseEvent e) {
        j1.setText("mouseEntered");
    }

    public void mouseExited(MouseEvent e) {
        j1.setText("mouseExited");
    }

    public static void main(String[] args) {

        new mouseEvent();
    }

}
