import java.util.Scanner;
import java.util.Random;

public class bhNumberGuessGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        System.out.print("Enter your guess: ");
        int userGuess = scanner.nextInt();
        int numberToGuess = random.nextInt(1,101);

        String result = (userGuess == numberToGuess) ? "Correct!" : "Incorrect!";
        System.out.println("Your guess is: " + result);

        scanner.close();
    }
}
