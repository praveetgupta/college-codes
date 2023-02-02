import java.util.*;
public class reverse{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = in.nextInt();
        int reversedNum = 0;
        while (num != 0) {
            int digit = num % 10;
            reversedNum = (reversedNum * 10) + digit;
            num /= 10;
        }
        System.out.println("Reversed number: " + reversedNum);
        int sum=0;
        while (reversedNum != 0) {
        int digits = reversedNum % 10;
        sum = sum + digits;
        reversedNum = reversedNum / 10;
        }
        System.out.println("Sum of the reversed number: " + sum);
    }
}