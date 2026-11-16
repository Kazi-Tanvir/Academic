import java.util.Scanner;
import java.util.Random;

public class bsDice {
    static Scanner scanner = new Scanner(System.in);
    static Random random = new Random();
    public static void main(String[] args) {
        int number;
        System.out.println("Enter number of throws : ");
        number = scanner.nextInt();

        for (int i = 0; i < number; i++) {
            int roll = random.nextInt(6) + 1;
            rollDice(roll);
        }
    }

    static void rollDice(int random){
        String dice1 = """
                +-------------------+
                |                   |
                |        ⚪        |
                |                   |
                +-------------------+
                """;
        String dice2 = """
                +-------------------+
                |                   |
                |      ⚪   ⚪      |
                |                   |
                +-------------------+
                """;
        String dice3 = """
                +-------------------+
                |                   |
                |      ⚪   ⚪      |
                |        ⚪        |
                +-------------------+
                """;
        String dice4 = """
                +-------------------+
                |      ⚪   ⚪      |
                |                   |
                |      ⚪   ⚪      |
                +-------------------+
                """;
        String dice5 = """
                +-------------------+
                |      ⚪   ⚪      |
                |        ⚪        |
                |      ⚪   ⚪      |
                +-------------------+
                """;
        String dice6 = """
                +-------------------+
                |      ⚪   ⚪      |
                |      ⚪   ⚪      |
                |      ⚪   ⚪      |
                +-------------------+
                """;
        
        switch (random) {
            case 1 -> System.out.println(dice1);
            case 2 -> System.out.println(dice2);
            case 3 -> System.out.println(dice3);
            case 4 -> System.out.println(dice4);
            case 5 -> System.out.println(dice5);
            case 6 -> System.out.println(dice6);
        }
    }
}
