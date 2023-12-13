import java.net.*;

public class sender_side {
  public static void main(String[] args) throws Exception {
    DatagramSocket ds = new DatagramSocket();
    String str = "hello world";
    InetAddress ia = InetAddress.getByName("127.0.0.1");
    DatagramPacket dp = new DatagramPacket(str.getBytes(), str.length(), ia, 3000);
    ds.send(dp);
    ds.close();
  }
}
