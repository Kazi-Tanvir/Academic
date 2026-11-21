---
title: "OOP BRO Basics 12 - rock paper scissors"
aliases:
  - Java Basics 12
  - Rock Paper Scissors Game
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/control-flow
  - topic/game-logic
  - topic/loops
  - topic/user-input
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - caRockPaperScissor.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 11 - quiz game]]"
next: "[[OOP BRO Basics 13 - slot machine]]"
related:
  - "[[OOP BRO Basics 03 - strings]]"
  - "[[OOP BRO Basics 04 - conditionals]]"
  - "[[OOP BRO Basics 06 - loops]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 12 - rock paper scissors

> [!abstract] Summary
> An interactive Rock-Paper-Scissors game pitting the user against the computer. Covers random choice selection from an array, input case-insensitivity, comprehensive win/loss/tie conditional decision trees, and replayability via a `do-while` loop.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `caRockPaperScissor.java` | Rock Paper Scissors Engine | Computer AI choice via `Random`, string comparison (`equalsIgnoreCase`), win/loss matrix, play-again loop. |

---

## Code (`caRockPaperScissor.java`)
```java
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
```

---

## How it works
- **Choice Representation**: `String[] choices = ('rock', 'paper', 'scissors');`
- **Computer Move**: `choices[random.nextInt(3)]` randomly selects one of the 3 array entries.
- **Input Validation**: Ensures player entered `"rock"`, `"paper"`, or `"scissors"` before comparing.
- **Outcome Matrix**:
  - Tie: `playerChoice.equals(computerChoice)`
  - Player Win conditions:
    - Player `rock` vs Computer `scissors`
    - Player `paper` vs Computer `rock`
    - Player `scissors` vs Computer `paper`
  - Computer Win: All remaining valid outcomes.
- **Play Again Loop**: Reads string answer (`"yes"`/`"no"`); continues while answer begins with `"y"`.

---

## Sample Run
```text
Enter your move (rock, paper, scissors): rock
Computer choice: scissors
YOU WIN!
Play again (yes/no): no
Goodbye!
```

---

## Gotchas
> [!warning] Comparing Strings with `==` vs `.equals()`
> In Java, strings are reference objects. Using `playerChoice == "rock"` checks whether both refer to the exact same memory address, which fails for user input strings. Always use `.equals()` or `.equalsIgnoreCase()`.

---

## Key Takeaways
- Use string arrays with `random.nextInt(array.length)` to model AI choices.
- Structure complex game outcomes into clear: Tie $\to$ Win Cases $\to$ Default Loss.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 03 - strings]] - String comparison and case conversion
- [[OOP BRO Basics 04 - conditionals]] - Compound logical conditions
- [[OOP BRO Basics 13 - slot machine]] - Casino game mechanics
