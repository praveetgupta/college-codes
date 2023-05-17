import java.awt.BorderLayout;
import javax.swing.*;

public class BorderLayoutDemo extends JFrame {

    public BorderLayoutDemo() {
        // Set the title of the window
        super("BorderLayout Demo");

        // Set the layout manager to BorderLayout
        setLayout(new BorderLayout());

        // Create buttons for each of the five regions
        JButton northButton = new JButton("North");
        JButton southButton = new JButton("South");
        JButton eastButton = new JButton("East");
        JButton westButton = new JButton("West");
        JButton centerButton = new JButton("Center");

        // Add the buttons to the JFrame with the BorderLayout constraints
        add(northButton, BorderLayout.NORTH);
        add(southButton, BorderLayout.SOUTH);
        add(eastButton, BorderLayout.EAST);
        add(westButton, BorderLayout.WEST);
        add(centerButton, BorderLayout.CENTER);

        // Set the size of the window and make it visible
        setSize(400, 300);
        setVisible(true);
    }

    public static void main(String[] args) {
        new BorderLayoutDemo();
    }
}
