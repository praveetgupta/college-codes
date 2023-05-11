import java.io.*;

public class CopyFile {
   public static void main(String[] args) {
      File sourceFile = new File("sourceFile.txt"); // the source file
      File destFile = new File("destFile.txt"); // the destination file
      
      try (BufferedReader reader = new BufferedReader(new FileReader(sourceFile));
           BufferedWriter writer = new BufferedWriter(new FileWriter(destFile))) {
         
         String line;
         while ((line = reader.readLine()) != null) {
            writer.write(line);
            writer.newLine(); // add a new line after each line copied
         }
         
         System.out.println("File copied successfully.");
         
      } 
        catch (IOException e) {
             e.printStackTrace();
        }
   }
}
