/*. Accept length and width and display the area for 5 rectangles using array
 */

 import java.util.Scanner;

 public class RectanglesArray {
     public static void main(String[] args) {
         Scanner scanner = new Scanner(System.in);
 
         double[] lengths = new double[5];
         double[] widths = new double[5];
         double[] areas = new double[5];
 
         for (int i = 0; i < 5; i++) {
             System.out.println("Enter the length and width of rectangle " + (i + 1) + ":");
             lengths[i] = scanner.nextDouble();
             widths[i] = scanner.nextDouble();
             areas[i] = lengths[i] * widths[i];
         }
 
         System.out.println("\nArea of 5 rectangles:");
 
         for (int i = 0; i < 5; i++) {
             System.out.println("Rectangle " + (i + 1) + ": " + areas[i]);
         }
     }
 }
 