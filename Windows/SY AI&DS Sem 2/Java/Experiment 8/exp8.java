public class exp8 {
    public static void main(String args[]) {
        int a = 10, b = 5, c = 5;
        try {
            int x = (a / (b - c));
            System.out.println("X: " + x);
        } catch (ArithmeticException e)
        {
            System.out.println("Divide by Zero");
            System.out.println(e.getMessage());
        }
    }
}