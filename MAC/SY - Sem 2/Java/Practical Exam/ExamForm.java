import javax.swing.*;
import java.awt.*;

public class ExamForm extends JFrame {

    // create labels for form fields
    JLabel nameLabel = new JLabel("Name: ");
    JLabel rollNoLabel = new JLabel("Roll No: ");
    JLabel subjectLabel = new JLabel("Subject: ");
    JLabel dateLabel = new JLabel("Date: ");
    JLabel timeLabel = new JLabel("Time: ");

    // create text fields for form fields
    JTextField nameField = new JTextField();
    JTextField rollNoField = new JTextField();
    JTextField subjectField = new JTextField();
    JTextField dateField = new JTextField();
    JTextField timeField = new JTextField();

    // create button for submitting form
    JButton submitButton = new JButton("Submit");

    // constructor for exam form
    public ExamForm() {
        // set the title of the frame
        setTitle("Exam Form");

        // set the size of the frame
        setSize(400, 250);

        // set the layout manager for the frame
        setLayout(new GridLayout(6, 2, 10, 10));

        // add the labels and text fields to the frame
        add(nameLabel);
        add(nameField);
        add(rollNoLabel);
        add(rollNoField);
        add(subjectLabel);
        add(subjectField);
        add(dateLabel);
        add(dateField);
        add(timeLabel);
        add(timeField);

        // add the submit button to the frame
        add(new JLabel(""));
        add(submitButton);

        // set the visibility of the frame
        setVisible(true);

        // set the default close operation for the frame
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    // main method to create and display the exam form
    public static void main(String[] args) {
        ExamForm examForm = new ExamForm();
    }
}
