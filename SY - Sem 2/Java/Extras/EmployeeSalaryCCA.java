import java.util.*;

public class EmployeeSalaryCCA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] basicSalary = new double[5];
        double[] hra = new double[5];
        double[] da = new double[5];
        double[] grossSalary = new double[5];
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter details for Employee " + (i + 1) + ":");
            System.out.print("Basic Salary: ");
            basicSalary[i] = sc.nextDouble();
            System.out.print("HRA: ");
            hra[i] = sc.nextDouble();
            System.out.print("DA: ");
            da[i] = sc.nextDouble();

            grossSalary[i] = basicSalary[i] + hra[i] + da[i];
        }
        sc.close();
        System.out.println("\nGross Salary of 5 employees:");
        System.out.printf("%-10s %-10s\n", "Emp No.", "Gross Salary");
        for (int i = 0; i < 5; i++) {
            System.out.printf("%-10d %-10.2f\n", (i + 1), grossSalary[i]);
        }
    }
}
