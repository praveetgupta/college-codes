import javax.swing.*;

public class table {
    JFrame f;

    table() {
        f = new JFrame();
        String column[] = { "Supplements", "Cars", "Bikes" };
        String data[][] = { { "Creatine", "Porsche 911 GT3RS", "Yamaha R1M" },
                { "Trenbolone Acetate", "Lamborghini Aventador V12", "Kawasaki Ninja H2" },
                { "Dianabol", "Koenigsegg Agera R", "Royal Enfield Continental GT 650" } };
        JTable jt = new JTable(data, column);
        jt.setBounds(30, 40, 200, 300);
        JScrollPane sp = new JScrollPane(jt);
        f.add(sp);
        f.setSize(300, 400);
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new table();
    }
}