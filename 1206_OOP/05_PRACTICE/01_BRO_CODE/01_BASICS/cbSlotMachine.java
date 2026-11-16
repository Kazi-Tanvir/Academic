import java.util.Scanner;
import java.util.Random;

public class cbSlotMachine {
    static Scanner scanner = new Scanner(System.in);
    static Random random = new Random();
    public static void main(String[] args) {

        int balance = 100;
        int bet; 
        int payout;
        String[] row;
        String playAgain;

        System.out.println("Welcome to the Slot Machine!");
        while(balance>0){
            System.out.println("Your current balance is: $" + balance);
            System.out.print("Enter your bet amount: ");
            bet = scanner.nextInt();
            scanner.nextLine();

            if(bet > balance){
                System.out.println("You cannot bet more than your current balance.");
                continue;
            }
            else if(bet <= 0){
                System.out.println("Bet amount must be greater than zero.");
                continue;
            }
            else balance -= bet;

            System.out.println("Spinning...");
            row = spinRow();
            printRow(row);
            payout = getPayout(row, bet);
            balance += payout;

            System.out.println("Your new balance is: $" + balance);
            System.out.print("Do you want to play again? (yes/no): ");
            playAgain = scanner.nextLine();

            if(!playAgain.equals("yes")){
                System.out.println("Thank you for playing! Your final balance is: $" + balance);
                break;
            }

        }
        
    }
    static String[] spinRow() {
        String[] symbols = {"Cherry", "Lemon", "Orange", "Plum", "Bell", "Bar"};

        String[] row = new String[3];
        for (int i = 0; i < 3; i++) {
            row[i] = symbols[random.nextInt(symbols.length)];
        }
        return row;
    }
    static void printRow(String[] row) {
        System.out.println("-------------");
        System.out.println(""+ String.join(" | ", row));
        System.out.println("-------------");
    }

    static int getPayout(String[] row, int bet) {
        if (row[0].equals(row[1]) && row[1].equals(row[2])) {
            System.out.println("Jackpot! You win 10x your bet!");
            return bet * 10;
        } else if (row[0].equals(row[1]) || row[1].equals(row[2]) || row[0].equals(row[2])) {
            System.out.println("You win 2x your bet!");
            return bet * 2;
        } else {
            System.out.println("No win this time.");
            return 0;
        }
    }
    //     JAVA SLOT MACHINE
    // DECLARE VARIABLES
    // DISPLAY WELCOME MESSAGE
    // PLAY IF BALANCE > O
    // ENTER BET AMOUNT
    // VERIFY IF BET > BALANCE
    // VERIFY IF BET > O
    // SUBTRACT BET FROM BALANCE
    // SPIN ROW
    // PRINT ROW
    // GET PAYOUT
    // ASK Tot PLAY AGAIN
    // DISPLAY EXIT MESSAGEI
}
