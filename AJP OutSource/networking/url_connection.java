import java.net.*;
import java.util.Date;

public class url_connection{

    public static void main(String[] args) throws Exception {
        URL url=new URL("http://www.internic.net/");
        URLConnection uc=url.openConnection();
        long d=uc.getDate();
        if (d==0) {
            System.out.println("Date not available");
        } else {
            System.out.println("Date: "+new Date(d));
        }
        long e=uc.getExpiration();
        if (e==0) {
            System.out.println("Expiration not available");
        } else {
            System.out.println("Expiration: "+new Date(e));
        }
        long m=uc.getLastModified();
        if (m==0) {
            System.out.println("Modification not done");
        } else {
            System.out.println("Last Modified: "+new Date(m));
        }
        System.out.println("Content Type: "+uc.getContentType());
        int len=uc.getContentLength();
        if (len==-1) {
            System.out.println("Length not available");
        } else {
            System.out.println("Length: "+len);
        }
    }
}