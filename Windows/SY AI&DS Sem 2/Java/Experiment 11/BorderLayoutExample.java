import java.awt.BorderLayout;
import java.awt.Checkbox;
import javax.swing.JFrame;

class BorderLayoutExample {
    public static void main(String[] args) {
        // Create a JFrame
        JFrame frame = new JFrame("BorderLayout Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create a Checkbox
        Checkbox checkbox = new Checkbox("Center");

        // Add the Checkbox to the center of the frame
        frame.add(checkbox, BorderLayout.CENTER);

        // Set the size and make the frame visible
        frame.setSize(300, 200);
        frame.setVisible(true);
    }
}
