/*Write java program showing following String class methods
charAT(),length(),substring(int),substring(int,int),equals(),comapreTo(),toUpperCase(),toLoweCase(),concat()
 */

import java.util.*;

class StringClassMethods {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s1 = "Hello";
        String s2 = "World";

        System.out.println("\ncharAt: " + s1.charAt(2));
        System.out.println("length: " + s1.length());
        System.out.println("substring(int): " + s2.substring(2));
        System.out.println("substring(int, int): " + s1.substring(0, 3));
        System.out.println("equals: " + s1.equals(s2));
        System.out.println("compareTo: " + s1.compareTo(s2));
        System.out.println("toUpperCase: " + s1.toUpperCase());
        System.out.println("toLowerCase: " + s2.toLowerCase());
        System.out.println("concat: " + s1.concat(s2));
    }
}