import java.util.Scanner;

public class DivideByZeroException {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the numerator: ");
        int numerator = sc.nextInt();
        System.out.println("Enter the denominator: ");
        int denominator = sc.nextInt();
        try {
            int quotient = numerator / denominator;
            System.out.println("Quotient: " + quotient);
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
            System.out.println("Cannot divide by zero!");
        }
    }
}
