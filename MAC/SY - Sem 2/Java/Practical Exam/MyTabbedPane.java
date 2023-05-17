import javax.swing.*;
import java.awt.*;

public class MyTabbedPane extends JFrame {
    public MyTabbedPane() {
        setTitle("My Tabbed Pane");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create JTabbedPane
        JTabbedPane tabbedPane = new JTabbedPane();
        
        // Add tabs to JTabbedPane
        JPanel tab1 = new JPanel();
        tab1.add(new JLabel("This is Tab 1"));
        tabbedPane.addTab("Tab 1", tab1);

        JPanel tab2 = new JPanel();
        tab2.add(new JLabel("This is Tab 2"));
        tabbedPane.addTab("Tab 2", tab2);

        JPanel tab3 = new JPanel();
        tab3.add(new JLabel("This is Tab 3"));
        tabbedPane.addTab("Tab 3", tab3);

        // Add JTabbedPane to JFrame
        getContentPane().add(tabbedPane, BorderLayout.CENTER);

        // Set window size and show window
        setSize(300, 200);
        setVisible(true);
    }

    public static void main(String[] args) {
        new MyTabbedPane();
    }
}
