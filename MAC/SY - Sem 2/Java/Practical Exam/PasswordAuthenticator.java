import java.util.Scanner;

public class PasswordAuthenticator {
    public static void main(String[] args) {
        String password = "mypassword"; // set the correct password here

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter password: ");
        String inputPassword = sc.nextLine();

        try {
            if (!inputPassword.equals(password)) {
                throw new Exception("Authentication Failure!"); // throw the exception if the password is incorrect
            } else {
                System.out.println("Authentication Successful!");
            }
        } catch (Exception e) {
            System.out.println(e.getMessage()); // print the exception message
        }
    }
}
