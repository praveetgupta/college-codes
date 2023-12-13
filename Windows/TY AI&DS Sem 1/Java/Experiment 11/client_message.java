import java.net.*;
import java.io.*;

public class client_message {
    public static void main(String[] args) throws UnknownHostException, IOException {
        Socket soc = new Socket("localHost", 9806);
        DataOutputStream dout = new DataOutputStream(soc.getOutputStream());
        dout.writeUTF("Hello Server");
        dout.flush();
        dout.close();
        soc.close();
    }
}
