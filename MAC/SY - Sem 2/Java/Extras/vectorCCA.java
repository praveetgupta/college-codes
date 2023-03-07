import java.util.*;

public class vectorCCA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Vector<Integer> vector = new Vector<>();
        System.out.print("Enter integers (enter -1 to stop): ");
        int num = sc.nextInt();
        while (num != -1) {
            vector.addElement(num);
            num = sc.nextInt();
        }
        System.out.println("Original vector: " + vector);
        System.out.print("Enter the index of the element to delete: ");
        int index = sc.nextInt();
        if (index < 0 || index >= vector.size()) {
            System.out.println("Invalid index");
        } else {
            vector.removeElementAt(index);

            System.out.println("Updated vector: " + vector);
        }
        sc.close();
    }
}
