import java.util.Scanner;
import java.util.Random;

public class caRockPaperScissor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        String userChoice;
        String computerChoice;

        int userScore = 0;
        int computerScore = 0;

        String[] choices = {"rock", "paper", "scissors"};
        for (int i = 0; i < 3; i++) {
            System.out.print("Enter your choice (rock, paper, scissors): ");
            userChoice = scanner.nextLine();

            computerChoice = choices[random.nextInt(choices.length)];

            if (userChoice.equals(computerChoice)) {
                System.out.println("It's a tie!");
            } else if ((userChoice.equals("rock") && computerChoice.equals("scissors")) ||
                       (userChoice.equals("paper") && computerChoice.equals("rock")) ||
                       (userChoice.equals("scissors") && computerChoice.equals("paper"))) {
                System.out.println("You win!");
                userScore++;
            } else {
                System.out.println("Computer wins!");
                computerScore++;
            }
        }
        System.out.println("Final Score: You " + userScore + " - Computer " + computerScore);
        scanner.close();
    }
    // ROCK PAPER SCISSOR
    // DECALRE VARIABLES
    // GET CHOICE FROM THE USER
    // CHECK WIN CONDITIONS
    // ASK TO PLAY AGAIN?
    // GOODBYE MESSAGE
}
