import java.io.*;
import java.net.*;

public class client_side{
    public static void main(String[] args) throws Exception{
        DatagramSocket ds = new DatagramSocket();
        String str = "Hello Server";
        InetAddress ia = InetAddress.getByName("127.0.0.1");
        DatagramPacket dp = new DatagramPacket(str.getBytes(),str.length(),ia,3000);
        ds.send(dp);
        ds.close();
    }
}