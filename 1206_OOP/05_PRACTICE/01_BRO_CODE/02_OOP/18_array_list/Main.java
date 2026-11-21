import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> fruits = new ArrayList<>();

        System.out.println("Enter the number of fruits you want ");
        int numOfFruits = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < numOfFruits; i++) {
            System.out.print("Enter the name of " + i + "th fruit :");
            String fruit = scanner.nextLine();
            fruits.add(fruit);
        }

        for (String fruit : fruits) {
            System.out.println(fruit);
        }

        fruits.remove(1);
        fruits.set(1, "notFruit");
        System.out.println(fruits.get(1));
        System.out.println(fruits.size());

        Collections.sort(fruits);
        System.out.println(fruits);

        scanner.close();
    }
}
