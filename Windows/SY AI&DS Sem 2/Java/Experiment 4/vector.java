import java.util.*;

class vector {
    public static void main(String args[]) {
        Vector<String> v = new Vector<String>();
        v.addElement("Dumbbell");
        v.addElement("Barbell");
        v.addElement("CableMachine");
        v.addElement("Plates");
        v.addElement("Rack");
        System.out.println("Vector is:" + v);
        v.addElement("ResistanceBand");
        System.out.println("Vector is:" + v);
        System.out.println("Element at 3rd position is:" + v.elementAt(3));
        System.out.println("Size of vector is:" + v.size());
        System.out.println("Capacity of vector is:" + v.capacity());
    }
}