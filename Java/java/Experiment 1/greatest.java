//greatest of three numbers
public class greatest {
    public static void main(String[] args) {
        int a = 10, b = 20, c = 30;
        if (a > b && a > c) {
            System.out.println("a is the greatest number");
        } else if (b > a && b > c) {
            System.out.println("b is the greatest number");
        } else {
            System.out.println("c is the greatest number");
        }
    }
    
}
