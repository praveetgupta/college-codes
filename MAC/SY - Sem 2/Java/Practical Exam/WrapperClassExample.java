public class WrapperClassExample {
    public static void main(String[] args) {
        // Convert primitive data types to objects using wrapper classes
        Integer intObj = Integer.valueOf(10);
        Double doubleObj = Double.valueOf(3.14);
        Character charObj = Character.valueOf('A');
        Boolean boolObj = Boolean.valueOf(true);

        // Convert objects to primitive data types using wrapper classes
        int intValue = intObj.intValue();
        double doubleValue = doubleObj.doubleValue();
        char charValue = charObj.charValue();
        boolean boolValue = boolObj.booleanValue();

        // Print the values
        System.out.println("Integer Object: " + intObj);
        System.out.println("Double Object: " + doubleObj);
        System.out.println("Character Object: " + charObj);
        System.out.println("Boolean Object: " + boolObj);
        System.out.println("int Value: " + intValue);
        System.out.println("double Value: " + doubleValue);
        System.out.println("char Value: " + charValue);
        System.out.println("boolean Value: " + boolValue);
    }
}
