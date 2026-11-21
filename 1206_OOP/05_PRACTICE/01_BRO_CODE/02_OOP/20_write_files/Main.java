import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        String filePath = "data\\output.txt";
        String textContent = """
        Roses are red, 
        Violets are blue.
        BOOTY BOOTY BOOTY 
        ROCKING' EVERYWHERE
        """;
        try (FileWriter writer = new FileWriter(filePath)) {
            writer.write(textContent);
            System.out.println("File has been written");
        } catch (FileNotFoundException e) {
            System.out.println("FileNotFound!!");
        } catch(IOException e){
            System.out.println("Io Exception");
        } catch(Exception e){
            System.out.println("Somthing went wrong !");
        }
    }    
}
