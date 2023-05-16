public class exp8_2 {
    public static void main(String args[]) {
        int a[] = {1,15}, b=15;
        try {
            int x = (a[2]/(b-a[1]));
        } catch (ArrayIndexOutOfBoundsException ae) {
            System.out.println(ae.getMessage());
            System.out.println("Array error");
        } catch(ArithmeticException ae){
            System.out.println(ae.getMessage());
        }
    }
}