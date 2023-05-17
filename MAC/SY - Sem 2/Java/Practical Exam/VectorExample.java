import java.util.Vector;

public class VectorExample {
    public static void main(String[] args) {
        // create a Vector with five initial elements
        Vector<String> v = new Vector<String>(5);
        v.add("Apple");
        v.add("Banana");
        v.add("Cherry");
        v.add("Date");
        v.add("Elderberry");

        // display the initial elements
        System.out.println("Initial elements: " + v);

        // add a new element to the end of the vector
        v.add("Fig");

        // display the updated elements
        System.out.println("Elements after adding one element: " + v);

        // retrieve an element using elementAt()
        String element = v.elementAt(3);
        System.out.println("Element at index 3: " + element);

        // display the size and capacity of the vector
        System.out.println("Size of vector: " + v.size());
        System.out.println("Capacity of vector: " + v.capacity());
    }
}
