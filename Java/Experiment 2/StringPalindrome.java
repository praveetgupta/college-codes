public class StringPalindrome {
    public static void main(String[] args) {
        String s1 = "MIT";
        StringBuilder sb = new StringBuilder(s1);
        String s2 = sb.reverse().toString();
        if (s1.compareTo(s2) == 0) {
            System.out.println("String Palindrome");
        } else {
            System.out.println("Not a Palindrome");
        }
    }
}
