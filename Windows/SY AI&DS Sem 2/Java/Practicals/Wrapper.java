/*Write a program using Wrapper class for conversion of primitive data to object and vice versa*/

public class Wrapper {
    public static void main(String[] args) {
        int num = 5;
        char ch = 's';
        double d = 10.5;
        String s1 = "hello";
        System.out.println("PRIMITIVE DATA TYPES !!!");
        Integer obj_num = new Integer(num);
        Character char_num = new Character(ch);
        Double double_num = new Double(d);
        String obj_s1 = new String(s1);
        System.out.println("WRAPPER CLASS OBJECTS !!!");
        System.out.println("Integer Wrapper Object: " + obj_num);
    }
}