import java.io.*;

public class file extends Exception {

    public static void main(String[] args) {
        FileInputStream instream = null;
        FileOutputStream outstream = null;
        try {
            File obj = new File("E:/SY AI&DS Sem 2/Java/abc.txt");
            File obj2 = new File("E:/SY AI&DS Sem 2/Java/def.txt");
            obj2.createNewFile();
            instream = new FileInputStream(obj);
            outstream = new FileOutputStream(obj2);
            byte[] buffer = new byte[1024];
            int length;
            while ((length = instream.read(buffer)) > 0) {
                outstream.write(buffer, 0, length);
                System.out.println("File Copied");
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}