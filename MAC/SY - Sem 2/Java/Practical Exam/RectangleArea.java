import java.util.Scanner;

public class RectangleArea {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // create arrays to store the length and width of 5 rectangles
        double[] length = new double[5];
        double[] width = new double[5];

        // prompt the user to enter the length and width of each rectangle
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter the length and width of rectangle #" + (i + 1) + ":");
            System.out.print("Length: ");
            length[i] = input.nextDouble();
            System.out.print("Width: ");
            width[i] = input.nextDouble();
        }

        // calculate and display the area of each rectangle
        System.out.println("The areas of the 5 rectangles are:");
        for (int i = 0; i < 5; i++) {
            double area = length[i] * width[i];
            System.out.println("Rectangle #" + (i + 1) + ": " + area);
        }

        input.close(); // close the scanner object
    }
}
