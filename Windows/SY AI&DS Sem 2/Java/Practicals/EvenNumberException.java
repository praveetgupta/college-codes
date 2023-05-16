import java.util.Scanner;

public class EvenNumberException {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter a number: ");
      int number = sc.nextInt();
      try {
         if (number % 2 != 0) {
            throw new Exception("Not an even number!");
         }
         System.out.println(number + " is an even number.");
      } catch (Exception e) {
         System.out.println("Error: " + e.getMessage());
      }
   }
}
