import java.io.*;
import java.net.*;

public class server_side{
    public static void main(String[] args) throws Exception{
        DatagramSocket ds = new DatagramSocket(3000);
        byte[] buf = new byte[1024];
        DatagramPacket dp = new DatagramPacket(buf,1024);
        ds.receive(dp);
        String strrec = new String(dp.getData(),0,dp.getLength());
        System.out.println(strrec);
        ds.close();
    }
}