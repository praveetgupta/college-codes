import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class JTableExample {
    public static void main(String[] args) {
        // create a JFrame to hold the JTable
        JFrame frame = new JFrame("JTable Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // create a DefaultTableModel with some data
        String[] columnNames = {"Name", "Age", "Gender"};
        Object[][] data = {
                {"Sarthak", 18, "Male"},
                {"Shrushti", 28, "Female"},
                {"Praveet", 17, "Male"},
                {"Godwin", 28, "Male"}
        };
        DefaultTableModel model = new DefaultTableModel(data, columnNames);

        // create a JTable with the DefaultTableModel
        JTable table = new JTable(model);

        // create a JScrollPane to hold the JTable
        JScrollPane scrollPane = new JScrollPane(table);

        // add the JScrollPane to a JPanel
        JPanel panel = new JPanel();
        panel.add(scrollPane);

        // add the JPanel to the JFrame
        frame.add(panel);

        // set the size of the JFrame and show it
        frame.setSize(500, 100);
        frame.setVisible(true);
    }
}
