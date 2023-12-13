import java.net.*;

public class UDPSender {
    public static void main(String[] args) throws Exception {
        try (DatagramSocket ds = new DatagramSocket()) {
            String str = "Sammed Sagare";
            InetAddress ia = InetAddress.getByName("192.168.137.237");
            DatagramPacket dp = new DatagramPacket(str.getBytes(), str.length(), ia, 1607);
            ds.send(dp);
        }
    }
}