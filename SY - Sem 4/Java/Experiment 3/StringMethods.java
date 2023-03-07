/*Write java program showing following String class methods
charAT(),length(),substring(int),substring(int,int),equals(),comapreTo(),toUpperCase(),toLoweCase(),concat()*/

import java.util.*;
public class StringMethods{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = input.nextLine();
        System.out.println("The string you entered is: " +str);
        System.out.println("The length of the string is: " +str.length());
        System.out.println("The character at index 3 is: " +str.charAt(3));
        System.out.println("The substring from index 3 to end is: " +str.substring(3));
        System.out.println("The substring from index 3 to 5 is: " +str.substring(3,5));
        System.out.println("The string in uppercase is: " +str.toUpperCase());
        System.out.println("The string in lowercase is: " +str.toLowerCase());
        System.out.println("The string concatenated with 'Hello' is: " +str.concat("Hello"));
        System.out.println("The string compared with 'Hello' is: " +str.compareTo("Hello"));
        System.out.println("The string compared with 'Hello' is: " +str.equals("Hello"));
    }
}
