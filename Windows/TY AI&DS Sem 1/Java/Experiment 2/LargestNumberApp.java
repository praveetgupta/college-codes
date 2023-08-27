import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LargestNumberApp extends JFrame implements ActionListener {
    JTextField t1, t2;
    JButton button;
    JLabel resultLabel;

    public LargestNumberApp() {
        setTitle("Largest Number Finder");
        setSize(300, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create components
        t1 = new JTextField(10);
        t2 = new JTextField(10);
        button = new JButton("Largest");
        resultLabel = new JLabel();

        // Add components to the frame
        setLayout(new FlowLayout());
        add(new JLabel("Enter first number: "));
        add(t1);
        add(new JLabel("Enter second number: "));
        add(t2);
        add(button);
        add(resultLabel);

        // Attach ActionListener to the button
        button.addActionListener(this);

        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button) {
            try {
                int num1 = Integer.parseInt(t1.getText());
                int num2 = Integer.parseInt(t2.getText());

                int largest = Math.max(num1, num2);
                resultLabel.setText("Largest number: " + largest);
            } catch (NumberFormatException ex) {
                resultLabel.setText("Invalid input");
            }
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new LargestNumberApp();
            }
        });
    }
}
