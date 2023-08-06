import java.util.Scanner;

public class Password {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the password: ");
      String password = sc.nextLine();
      try {
         if (!password.equals("mypassword")) {
            throw new Exception("Authentication Failure!");
         }
         System.out.println("Password is correct.");
      } catch (Exception e) {
         System.out.println("Error: " + e.getMessage());
      }
   }
}