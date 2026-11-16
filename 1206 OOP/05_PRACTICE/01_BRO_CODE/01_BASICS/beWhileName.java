import java.util.Scanner;

public class beWhileName {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String name = "";

        while (name.isEmpty()) {
            System.out.print("Enter your name: ");
            name = scanner.nextLine();
            if (name.isEmpty()) System.out.println("Name cannot be empty. Please try again.");
        }

        System.out.println("Your name is: " + name);
        scanner.close();}
}