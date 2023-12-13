import java.net.*;
import java.io.*;

public class server_message {
    public static void main(String[] args) throws IOException {
        ServerSocket sc = new ServerSocket(1607);
        Socket s = sc.accept();
        DataInputStream din = new DataInputStream(s.getInputStream());
        String str = (String) din.readUTF();
        System.out.println("Message: " + str);
        sc.close();
    }
}