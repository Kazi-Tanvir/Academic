---
title: "OOP BRO Basics 10 - dice"
aliases:
  - Java Basics 10
  - Dice Roller Program
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/game-logic
  - topic/math
  - topic/user-input
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - bsDice.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 09 - bank program]]"
next: "[[OOP BRO Basics 11 - quiz game]]"
related:
  - "[[OOP BRO Basics 02 - arithmetic math and mini programs]]"
  - "[[OOP BRO Basics 06 - loops]]"
  - "[[OOP BRO Basics 12 - rock paper scissors]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 10 - dice

> [!abstract] Summary
> An ASCII-art dice rolling program demonstrating pseudo-random number generation using `java.util.Random`, accumulation of total roll values, and a procedural `printDie(int roll)` method rendering multi-line ASCII graphics for die faces 1 through 6.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `bsDice.java` | Multi-Dice Roller | Random generation (`1..6`), input validation ($> 0$), ASCII art rendering per face, roll summation. |

---

## Code (`bsDice.java`)
```java
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
```

---

## How it works
- **User Prompt**: Asks how many dice to roll ($numOfDice$).
- **Loop & Accumulator**: Iterates $numOfDice$ times:
  - Generates a random number $roll = random.nextInt(6) + 1$.
  - Adds $roll$ to running accumulator `total`.
  - Invokes `printDie(roll)` to output visual ASCII representation of the die face.
- **ASCII Art Rendering**: Uses a switch statement to render ASCII box art:
  ```text
  -------
  | o   |
  |     |
  |   o |
  -------
  ```

---

## Sample Run
```text
Enter the # of dice to roll: 2
You rolled: 4
-------
| o o |
|     |
| o o |
-------
You rolled: 2
-------
| o   |
|     |
|   o |
-------
Total: 6
```

---

## Gotchas
> [!warning] Random Upper Bound Offset
> `random.nextInt(6)` produces integers in the range $[0, 5]$.
> To model a 6-sided die accurately, you must add 1: `random.nextInt(6) + 1`.

---

## Key Takeaways
- ASCII art can be cleanly encapsulated inside a dedicated rendering function.
- Running sum accumulators require initializing variables (`int total = 0`) before loop entry.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 02 - arithmetic math and mini programs]] - Random number basics
- [[OOP BRO Basics 06 - loops]] - Definite for loop traversal
- [[OOP BRO Basics 13 - slot machine]] - Graphical slot symbol spinning
