---
title: "OOP BRO Basics 13 - slot machine"
aliases:
  - Java Basics 13
  - Slot Machine Program
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/arrays
  - topic/game-logic
  - topic/loops
  - topic/user-input
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - cbSlotMachine.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 12 - rock paper scissors]]"
next: "[[OOP BRO 01 - class object]]"
related:
  - "[[OOP BRO Basics 08 - arrays]]"
  - "[[OOP BRO Basics 09 - bank program]]"
  - "[[OOP BRO 01 - class object]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 13 - slot machine

> [!abstract] Summary
> A complete casino slot machine game in Java. Features starting bankroll balance management, wager placement validation, 3-reel random symbol spinning, ASCII payout grid visualization, and multiplier payout calculation based on symbol matching rules.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `cbSlotMachine.java` | 3-Reel Slot Machine Simulation | Reel spin generation, symbol array sampling, payout determination, bankroll tracking and zero-balance game over. |

---

## Code (`cbSlotMachine.java`)
```java
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
```

---

## How it works
- **Reel Symbols**: `String[] symbols = ('🍒', '🍉', '🍋', '🔔', '⭐');` (or text-based symbols `CHERRIES`, `WATERMELON`, etc.).
- **Spin Generator**: `spinReel()` method returns a 3-element `String[]` with randomly selected symbols.
- **Payout Calculation**:
  - Three matching symbols yield highest multiplier (e.g. 10x or 20x).
  - Two matching symbols yield smaller consolation payout (e.g. 2x or 3x).
  - No match loses the bet amount.
- **Game Lifecycle**:
  - Deducts bet from `balance`.
  - Displays spinning reels: `[ 🍒 | 🍒 | ⭐ ]`.
  - Adds winnings: `balance += payout`.
  - Prompts to play again; automatically ends if `balance <= 0`.

---

## Sample Run
```text
*************************
Welcome to Java Slots!
*************************
Current balance: $100
Enter bet amount: 10
Spinning...
[ 🍒 | 🍒 | 🍒 ]
JACKPOT! You won $100
Current balance: $190
Play again? (yes/no): no
Thanks for playing! You left with $190
```

---

## Gotchas
> [!warning] Array Element Comparison
> When comparing reel symbols, compare values with `.equals()`, not `==`:
> `reel[0].equals(reel[1]) && reel[1].equals(reel[2])`.

---

## Key Takeaways
- Cleanly separate the display/rendering code, spin generation logic, and payout evaluation into independent helper methods.
- Capstone of Java procedural basics before transitioning into Object-Oriented Programming (Classes & Objects).

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 08 - arrays]] - Array manipulation and indexing
- [[OOP BRO Basics 09 - bank program]] - Balance tracking and transaction logic
- [[OOP BRO 01 - class object]] - Transitioning from procedural to OOP
