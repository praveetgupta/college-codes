import java.util.Vector;

public class VectorExample {
    public static void main(String[] args) {
        Vector<String> vector = new Vector<>(3);
        vector.addElement("Apple");
        vector.addElement("Banana");
        vector.addElement("Cherry");
        System.out.println("Elements in the vector: " + vector);
        vector.insertElementAt("Grape", 1);
        System.out.println("Elements in the vector after adding Grape at index 1: " + vector);
        vector.removeElementAt(2);
        System.out.println("Elements in the vector after removing element at index 2: " + vector);
    }
}
