import java.util.Scanner;

public class ReverseAddition {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = scanner.nextInt();
        int reverseNum = 0;
        while (num != 0) {
            reverseNum = reverseNum * 10 + num % 10;
            num /= 10;
        }
        int sum = num + reverseNum;
        System.out.println("The sum of the number and its reverse is " + sum);
    }
}