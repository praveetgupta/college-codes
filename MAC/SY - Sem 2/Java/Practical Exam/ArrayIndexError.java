import java.util.Scanner;

public class ArrayIndexError {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = {1, 2, 3, 4, 5};
        
        try {
            System.out.print("Enter the index of the element you want to access: ");
            int index = scanner.nextInt();
            int value = arr[index]; // accessing element at index
            System.out.println("The value at index " + index + " is: " + value);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Array index out of bounds!");
        }
        
        scanner.close();
    }
}
