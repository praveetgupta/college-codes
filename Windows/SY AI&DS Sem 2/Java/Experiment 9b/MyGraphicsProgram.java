import java.awt.*;
import javax.swing.*;

public class MyGraphicsProgram extends JFrame {
    
    public MyGraphicsProgram() {
        setTitle("My Graphics Program");
        setSize(400, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        add(new GraphicsDemo());
        setVisible(true);
    }
    
    public static void main(String[] args) {
        new MyGraphicsProgram();
    }
    
}

class GraphicsDemo extends Canvas {
    
    public void paint(Graphics g) {
        g.setColor(Color.red);
        g.drawString("Welcome", 50, 50);
        g.drawLine(20, 30, 20, 300);
        g.drawRect(70, 100, 30, 30);
        g.fillRect(170, 100, 30, 30);
        g.drawOval(70, 200, 30, 30);
        g.setColor(Color.pink);
        g.fillOval(170, 200, 30, 30);
        g.drawArc(90, 150, 30, 30, 30, 270);
        g.fillArc(270, 150, 30, 30, 0, 180);
    }
    
}
