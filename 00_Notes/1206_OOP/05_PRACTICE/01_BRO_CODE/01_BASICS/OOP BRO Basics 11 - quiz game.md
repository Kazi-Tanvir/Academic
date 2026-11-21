---
title: "OOP BRO Basics 11 - quiz game"
aliases:
  - Java Basics 11
  - Quiz Game Program
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
  - bzQuizGame.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 10 - dice]]"
next: "[[OOP BRO Basics 12 - rock paper scissors]]"
related:
  - "[[OOP BRO Basics 08 - arrays]]"
  - "[[OOP BRO Basics 06 - loops]]"
  - "[[OOP BRO 04 - array of objects]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 11 - quiz game

> [!abstract] Summary
> A complete interactive terminal quiz game using parallel arrays: a 1D array for question prompts, a 2D array for four multiple-choice options per question, and a 1D array for correct answer index keys. Demonstrates score tracking and percentage calculation.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `bzQuizGame.java` | Console Multiple-Choice Quiz | Parallel array coordination, nested loop display of options, scoring logic, percentage computation. |

---

## Code (`bzQuizGame.java`)
```java
import java.util.Scanner;

public class bzQuizGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] questions = {
                "What is the capital of France?",
                "What is 2 + 2?",
                "What is the largest planet in our solar system?"
        };
        String[][] options = {
                {"A. Paris", "B. London", "C. Berlin", "D. Madrid"},
                {"A. 3", "B. 4", "C. 5", "D. 6"},
                {"A. Earth", "B. Mars", "C. Jupiter", "D. Saturn"}
        };
        char[] answers = {'A', 'B', 'C'};
        int score = 0;
        System.out.println("Welcome to the Quiz Game!");
        for (int i = 0; i < questions.length; i++) {
            System.out.println(questions[i]);
            for (String option : options[i]) {
                System.out.println(option);
            }
            System.out.print("Enter your answer (A, B, C, D): ");
            char guess = scanner.next().charAt(0);
            if (guess == answers[i]) {
                System.out.println("Correct!");
                score++;
            } else {
                System.out.println("Wrong! The correct answer was " + answers[i]);
            }
        }
        System.out.println("Your final score is: " + score);
        scanner.close();
    }
    // JAVA QUIZ GAME
    // QUESTIONS array[]
    //OPTIONS array[][]
    //DECLARE VARIABLES
    //WELCOME MESSAGE
    //QUESTIONS (LOOP)
    //  OPTIONS
    //  GET GUESS FROM USER
    //  CHECK YOUR GUESS
    // DISPLAY FINAL SCORE
}
```

---

## How it works
- **Data Structures**:
  - `String[] questions`: Array of trivia question strings.
  - `String[][] options`: 2D array matching each question index with four multiple-choice strings.
  - `int[] answers`: Array holding the 1-based correct option numbers (`1..4`).
- **Game Engine**:
  - An outer loop iterates through questions `0` to `questions.length - 1`.
  - An inner loop prints the four options from `options[i]`.
  - User guess is read via `scanner.nextInt()`.
  - If `guess == answers[i]`, prints "CORRECT!" and increments `score`. Otherwise prints "WRONG!".
- **Result Screen**: Computes percentage: `(double) score / questions.length * 100`.

---

## Sample Run
```text
******************************
Welcome to the Java Quiz Game!
******************************
What is the main function of a router?
1. Storing files
2. Encrypting data
3. Directing internet traffic
4. Managing passwords
Enter your guess: 3
CORRECT!

...

Your final score is: 4 out of 4
Percentage: 100.0%
```

---

## Gotchas
> [!warning] Parallel Array Fragility
> Parallel arrays require careful manual synchronization: if one array is updated or reordered without updating the others, questions and answers become mismatched. In Object-Oriented programming, this is later refactored into a `Question` class holding prompt, options, and answer.

---

## Key Takeaways
- 2D arrays neatly represent tabular or matrix data (like question rows and option columns).
- Remember to cast to `(double)` when calculating score percentages to prevent integer division truncation to `0`.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 08 - arrays]] - 1D and 2D arrays
- [[OOP BRO 04 - array of objects]] - Upgrading parallel arrays to an array of objects
- [[OOP BRO Basics 12 - rock paper scissors]] - Interactive player vs computer game logic
