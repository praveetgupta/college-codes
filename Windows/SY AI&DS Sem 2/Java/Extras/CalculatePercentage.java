import java.util.Scanner;

public class CalculatePercentage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks of 4 subjects: ");
        float sub1 = sc.nextFloat();
        float sub2 = sc.nextFloat();
        float sub3 = sc.nextFloat();
        float sub4 = sc.nextFloat();
        
        float totalMarks = sub1 + sub2 + sub3 + sub4;
        float percentage = (totalMarks / 400) * 100;
        
        System.out.printf("Total marks obtained: %.2f\n", totalMarks);
        System.out.printf("\nPercentage: %.2f%%\n", percentage);
    }
}