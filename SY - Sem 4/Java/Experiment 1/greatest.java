import java.util.*;

public class greatest{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 3 numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if(a>b && a>c){
            System.out.println(a + " is the greatest number.");
        }
        if(b>a && b>c){
            System.out.println(b + " is the greatest number.");
        }
        if(c>a && c>b){
            System.out.println(c + " is the greatest number.");
        }
        sc.close();
    }
}