import java.io.*;
import java.net.*;

public class server_message{
    public static void main(String[] args) throws IOException{
        ServerSocket sc = new ServerSocket(8901);
        Socket s = sc.accept();
        DataInputStream dis = new DataInputStream(s.getInputStream());
        String str = (String)dis.readUTF();
        System.out.println(str);
        sc.close();
    }
}