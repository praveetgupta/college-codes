import java.util.*;

public class fibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int count = sc.nextInt();
        int num1 = 0, num2 = 1, num3;
        System.out.print(num1 + " " + num2);
        while (count > 0) {
            num3 = num1 + num2;
            System.out.print(" " + num3);
            num1 = num2;
            num2 = num3;
            count--;
        }
        sc.close();
    }
}
