import java.io.*;
import java.net.*;
import java.lang.*;
import java.util.*;

public class url_connection{
    public static void main(String[] args) throws IOException{
        URL url = new URL("https://mitwpu.edu.in");
        URLConnection urlc = url.openConnection();
        long d = urlc.getDate();
        if (d==0)
            System.out.println("No Date Found");
        else
            System.out.println("Date: "+ new Date(d));
        System.out.println("Content Type: "+urlc.getContentType());
        int len = urlc.getContentLength();
        if(len==-1)
            System.out.println("Content Length not found");
        else
            System.out.println("Content Length: "+len);
        long d1 = urlc.getExpiration();
        if(d1==0)
            System.out.println("No Expiration Date Found");
        else
            System.out.println("Expiration Date: "+ new Date(d1));
    }
}