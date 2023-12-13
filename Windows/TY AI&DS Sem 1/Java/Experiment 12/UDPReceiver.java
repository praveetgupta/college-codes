import java.net.*;
public class UDPReceiver {
    public static void main(String[] args) throws Exception {
        try (DatagramSocket ds = new DatagramSocket(1607)) {
            byte[] buf = new byte[1024];
            DatagramPacket dp = new DatagramPacket(buf, 1024);
            ds.receive(dp);
            String strRecv = new String(dp.getData(), 0, dp.getLength());
            System.out.println(strRecv);
        }
    }
}