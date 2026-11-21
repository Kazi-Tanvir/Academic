---
title: "OOP BRO Basics 06 - loops"
aliases:
  - Java Basics 06
  - Loops and Iteration
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/control-flow
  - topic/game-logic
  - topic/loops
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - beWhileName.java
  - bfWhileGame.java
  - bgDoWhileGame.java
  - bhNumberGuessGame.java
  - biFor.java
  - bjNewYearCeleb.java
  - bkBreakContinue.java
  - blNestedLoop.java
  - bmNestedLoopUserInput.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 05 - logical operators]]"
next: "[[OOP BRO Basics 07 - methods overloading and scope]]"
related:
  - "[[OOP BRO Basics 04 - conditionals]]"
  - "[[OOP BRO Basics 08 - arrays]]"
  - "[[OOP BRO Basics 10 - dice]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 06 - loops

> [!abstract] Summary
> Comprehensive study of iterative control structures in Java: `while` loops, `do-while` loops (guaranteed minimum single execution), standard index-controlled `for` loops, loop disruption controls (`break` and `continue`), and multi-dimensional nested loops for 2D character grids.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `beWhileName.java` | Indefinite while loop | Repeatedly prompts for name until a non-empty string is entered. |
| `bfWhileGame.java` | Sentinel-controlled while loop | Game loop terminating on 'q' or 'Q'. |
| `bgDoWhileGame.java` | Post-test do-while loop | Executes prompt before checking the termination condition. |
| `bhNumberGuessGame.java` | Random guessing game | Loop tracking attempts with high/low feedback until guessed. |
| `biFor.java` | Standard for loop | Definite count-controlled loops (increment, decrement, step variations). |
| `bjNewYearCeleb.java` | Countdown timer | Countdown with `Thread.sleep()` delay simulation. |
| `bkBreakContinue.java` | Flow control jump statements | `break` (terminates loop) vs `continue` (skips current iteration). |
| `blNestedLoop.java` | Fixed 2D grid generation | Outer loop for rows, inner loop for columns. |
| `bmNestedLoopUserInput.java` | Dynamic 2D grid matrix | User specifies rows, columns, and character symbol. |

---

## 1. `while` and `do-while` Loops
### `beWhileName.java`
```java
import java.util.Scanner;

public class beWhileName {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String name = "";

        while (name.isEmpty()) {
            System.out.print("Enter your name: ");
            name = scanner.nextLine();
            if (name.isEmpty()) System.out.println("Name cannot be empty. Please try again.");
        }

        System.out.println("Your name is: " + name);
        scanner.close();}
}
```

### `bgDoWhileGame.java`
```java
import java.util.Scanner;

public class bgDoWhileGame {
   public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice = -1;

        System.out.println("Menu:");
        System.out.println("1. Start Game");
        System.out.println("0. Exit");

        do {
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            if (choice == 1) {
                System.out.println("Game started!");
            } else if (choice == 0) {
                System.out.println("Exiting the game.");
            } else {
                System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 0);

        System.out.println("Game exited.");
        scanner.close();
    } 
}
```

### How it works
- `while (condition)`: Evaluates the test expression *before* each iteration. If the initial test is false, the loop body never runs.
- `do Ellipsis while (condition);`: Executes the block *first*, then evaluates the condition. Guaranteed to run at least once, making it ideal for menu prompts and user input validation.

---

## 2. Count-Controlled `for` Loops & Flow Control
### `biFor.java`
```java
public class biFor {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            System.out.println("Number: " + i);
        }
    }
}
```

### `bkBreakContinue.java`
```java
public class bkBreakContinue {
    public static void main(String[] args) {
        for (int i = 0; i < 5; i++) {
            if (i == 3)
                continue;
            System.out.println(i);
        }
        for (int i = 0; i < 5; i++) {
            if (i==3)
                break;
            System.out.println(i);
        }
    }
}
```

### How it works
- `for (initialization; condition; update)`: Best when the iteration count is known ahead of time.
- `break`: Immediately exits the surrounding loop construct.
- `continue`: Skips the remainder of the current iteration body and proceeds directly to the update step.

---

## 3. Nested Loops and Grid Patterns
### `bmNestedLoopUserInput.java`
```java
import java.util.Scanner;

public class bmNestedLoopUserInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter row : ");
        int row = scanner.nextInt();

        System.out.println("Enter column : ");
        int column =  scanner.nextInt();
        scanner.nextLine();

        System.out.println("Enter Symbol : ");
        String symbol = scanner.nextLine();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(symbol);
            }
        System.out.println();
        }

        scanner.close();
    }
}
```

### How it works
- Outer loop runs `rows` times.
- Inner loop runs `columns` times per row, printing `symbol` with `System.out.print()`.
- After each inner loop completes, `System.out.println()` outputs a newline to begin the next row.

---

## Sample Run (`bmNestedLoopUserInput.java`)
```text
Enter the number of rows: 3
Enter the number of columns: 4
Enter the symbol: #
####
####
####
```

---

## Gotchas
> [!warning] Off-by-One and Infinite Loops
> - When using `<`, looping stops at `limit - 1`. When using `<=`, looping stops at `limit`.
> - Always ensure the loop variable is modified within the loop body, otherwise an infinite loop will freeze the program thread.

---

## Key Takeaways
- Use `while` for condition-driven loops where repetition count is unknown.
- Use `do-while` when an operation must occur at least once before testing (e.g. asking for input).
- Use `for` for index-based sequential progression.
- Nested loops have $O(R \times C)$ time complexity.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 04 - conditionals]] - Branching fundamentals
- [[OOP BRO Basics 08 - arrays]] - Iterating over collections
- [[OOP BRO Basics 11 - quiz game]] - Loop-driven interactive console app
