import java.util.Scanner;

public class bfWhileGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int choice = -1;
        System.out.println("Menu:");
        System.out.println("1. Start Game");
        System.out.println("0. Exit");
        while (choice != 0) {
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            if (choice == 1) {
                System.out.println("Game started!");
            } else if (choice == 0) {
                System.out.println("Exiting the game.");
            } else {
                System.out.println("Invalid choice. Please try again.");
            }
        }
        scanner.close();
    }
}
