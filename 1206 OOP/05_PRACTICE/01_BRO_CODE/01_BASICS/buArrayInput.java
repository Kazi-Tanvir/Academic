import java.util.Scanner;
import java.util.Arrays;

public class buArrayInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        

        String[] fruits = new String[5];

        for (int i = 0; i < 5; i++) {
            System.out.println("Enter fruit name : ");
            fruits[i] = scanner.nextLine();
        }
        fruits[0] = "Pineapple";
        int numOffruits = fruits.length;
        Arrays.sort(fruits);

        System.out.println(numOffruits);

        System.out.println("Array elements:");
        for (String fruit : fruits) {
            System.out.println(fruit);
        }

        scanner.close();
    }
}
