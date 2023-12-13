import java.net.*;
import java.util.Date;

public class exp10 {
    public static void main(String[] args) throws Exception {
        URL url = new URL("https://www.amazon.com/");
        URLConnection uc = url.openConnection();
        System.out.println("Protocol: " + url.getProtocol());
        System.out.println("Port " + url.getPort());
        System.out.println("Host: " + url.getHost());
        System.out.println("File: " + url.getFile());
        System.out.println("Ext : " + url.toExternalForm());
        System.out.println("Date:" + new Date(uc.getDate()));
        System.out.println("Expiration: " + uc.getExpiration());
        System.out.println("Content Length: " + uc.getContentLength());
        System.out.println("Last Modified: " + new Date(uc.getLastModified()));
    }
}