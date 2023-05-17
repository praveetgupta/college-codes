import java.util.Scanner;

public class EvenNumberExceptionExample {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            // Accept a number from the user
            System.out.print("Enter a number: ");
            int num = scanner.nextInt();

            // Check if the number is even
            if (num % 2 != 0) {
                // Throw an exception if the number is not even
                throw new Exception("Number is not even");
            }

            // Display the number if it is even
            System.out.println("Number is even: " + num);
        } catch (Exception e) {
            // Catch the exception and display the error message
            System.out.println("Error: " + e.getMessage());
        }
    }
}
