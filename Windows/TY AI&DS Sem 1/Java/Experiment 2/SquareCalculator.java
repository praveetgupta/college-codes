import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class SquareCalculator extends JFrame implements ActionListener {
    JTextField t1;
    JButton squareButton;
    JLabel resultLabel;

    public SquareCalculator() {
        setTitle("Square Calculator");
        setSize(300, 150);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(null);

        t1 = new JTextField();
        t1.setBounds(30, 20, 120, 30);
        add(t1);

        squareButton = new JButton("Square");
        squareButton.setBounds(160, 20, 80, 30);
        squareButton.addActionListener(this);
        add(squareButton);

        resultLabel = new JLabel("");
        resultLabel.setBounds(30, 60, 200, 30);
        add(resultLabel);

        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == squareButton) {
            try {
                int number = Integer.parseInt(t1.getText());
                int square = number * number;
                resultLabel.setText("Square: " + square);
            } catch (NumberFormatException ex) {
                resultLabel.setText("Invalid input");
            }
        }
    }

    public static void main(String[] args) {
        new SquareCalculator();
    }
}
