import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Enter number to divide : ");
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            scanner.nextLine();
            System.out.println(a/b);
        } catch(InputMismatchException e){
            System.out.println("INVALID INPUT!!");
        } catch (ArithmeticException e) {
            System.out.println("Cannot divide by zero !!");
        } catch(Exception e){
            System.out.println("Something went wrong !");
        } finally{
            System.out.println("This runs every time");
        }
    }    
}
