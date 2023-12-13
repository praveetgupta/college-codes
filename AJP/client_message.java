import java.io.*;
import java.net.*;

public class client_message{
    public static void main(String[] args) throws IOException{
        Socket s = new Socket("localhost",8901);
        String str = "Hello Server";
        DataOutputStream dout = new DataOutputStream(s.getOutputStream());
        dout.writeUTF(str);
        dout.flush();
        dout.close();
        s.close();
    }
}