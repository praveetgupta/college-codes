import java.util.Scanner;

public class MobilePhone {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // create arrays to store the data for 3 mobile phones
        String[] company = new String[3];
        double[] screenSize = new double[3];
        double[] price = new double[3];

        // prompt the user to enter the data for each mobile phone
        for (int i = 0; i < 3; i++) {
            System.out.println("Enter the details for mobile phone #" + (i + 1) + ":");
            System.out.print("Company name: ");
            company[i] = input.nextLine();
            System.out.print("Screen size (inches): ");
            screenSize[i] = input.nextDouble();
            System.out.print("Price: ");
            price[i] = input.nextDouble();
            input.nextLine(); // consume the newline character
        }

        // display the data for each mobile phone
        System.out.println("Details of the 3 mobile phones:");
        for (int i = 0; i < 3; i++) {
            System.out.println("Mobile phone #" + (i + 1) + ":");
            System.out.println("Company name: " + company[i]);
            System.out.println("Screen size: " + screenSize[i] + " inches");
            System.out.println("Price: $" + price[i]);
            System.out.println();
        }

        input.close(); // close the scanner object
    }
}
