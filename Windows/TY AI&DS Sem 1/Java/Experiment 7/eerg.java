import java.awt.*;
import java.awt.event.*;

class expt7 extends MouseAdapter {
    Frame j1;

    expt7() {
        j1 = new Frame("Magenta color with square when mouse id clicked");
        j1.setSize(400, 400);
        j1.setLayout(null);
        j1.addMouseListener(this);
        j1.setVisible(true);
    }

    public void mouseClicked(MouseEvent e) {
        Graphics g = j1.getGraphics();
        g.setColor(Color.MAGENTA);
        g.fillRect(e.getX(), e.getY(), 40, 40);
    }

    public static void main(String[] args) {
        new expt7();
    }
}
