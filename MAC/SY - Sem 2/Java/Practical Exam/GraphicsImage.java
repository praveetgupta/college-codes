import java.awt.*;
import javax.swing.*;

public class GraphicsImage extends JPanel {
  private Image image;

  public GraphicsImage() {
    image = Toolkit.getDefaultToolkit().getImage("image.jpg"); // load the image
  }

    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.drawImage(image, 0, 0, this); // draw the image
    }

  public static void main(String[] args) {
    JFrame frame = new JFrame("Graphics Image");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.add(new GraphicsImage());
    frame.pack();
    frame.setVisible(true);
  }
}
