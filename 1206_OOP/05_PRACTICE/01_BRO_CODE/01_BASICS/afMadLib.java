import java.util.Scanner;

public class afMadLib {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String adjective1, adjective2, adjective3, noun1, verb1;

        adjective1 = scanner.nextLine();
        adjective2 = scanner.nextLine();
        adjective3 = scanner.nextLine();
        noun1 = scanner.nextLine();
        verb1 = scanner.nextLine();

        System.out.println("Today we are going to a zoo and we are going to see a " + adjective1 + " " + noun1 + ". We are going to " + verb1 + " with the " + adjective2 + " animals. It is going to be a " + adjective3 + " day!");

        scanner.close();

    }
}
