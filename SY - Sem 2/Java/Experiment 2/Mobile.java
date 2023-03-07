import java.util.*;

public class Mobile {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the name of student 1: ");
        String name1 = sc.nextLine();
        System.out.print("Enter the roll no of student 1: ");
        int rollNo1 = sc.nextInt();
        System.out.print("Enter the percentage of student 1: ");
        double percentage1 = sc.nextDouble();

        System.out.print("Enter the name of student 2: ");
        sc.nextLine();
        String name2 = sc.nextLine();
        System.out.print("Enter the roll no of student 2: ");
        int rollNo2 = sc.nextInt();
        System.out.print("Enter the percentage of student 2: ");
        double percentage2 = sc.nextDouble();

        System.out.println("\nDetails of Student 1:");
        System.out.println("Name: " + name1);
        System.out.println("Roll no: " + rollNo1);
        System.out.println("Percentage: " + percentage1);

        System.out.println("Details of Student 2:");
        System.out.println("Name: " + name2);
        System.out.println("Roll no: " + rollNo2);
        System.out.println("Percentage: " + percentage2);
        sc.close();
    }
}
