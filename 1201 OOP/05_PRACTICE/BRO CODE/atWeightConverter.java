import java.util.Scanner;

public class atWeightConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double weight;
        int choice;

        System.out.println("Enter the weight: ");
        weight = scanner.nextDouble();

        System.out.println("Enter your choice (1 for kg to lb, 2 for lb to kg): ");
        choice = scanner.nextInt();

        if (choice == 1) {
            double pounds = weight * 2.20462;
            System.out.println(weight + " kg is equal to " + pounds + " lb");
        } else if (choice == 2) {
            double kilograms = weight / 2.20462;
            System.out.println(weight + " lb is equal to " + kilograms + " kg");
        } else {
            System.out.println("Invalid choice.");
        }

        scanner.close();
    }
}
