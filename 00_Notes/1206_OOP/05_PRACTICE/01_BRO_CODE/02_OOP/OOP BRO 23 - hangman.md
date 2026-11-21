---
title: "OOP BRO 23 - hangman"
aliases:
  - Java Hangman Game
  - OOP Hangman Project
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/game-logic
  - topic/strings
  - level/intermediate
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/23_hangman/Main.java"
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 22 - audio file]]"
next: "[[OOP BRO 24 - date time]]"
related:
  - "[[PROJ - Hangman]]"
  - "[[OOP BRO Basics 03 - strings]]"
  - "[[OOP BRO Basics 11 - quiz game]]"
created: 2026-11-21
status: draft
---
# OOP BRO 23 - hangman

> [!abstract] Summary
> Explores architecting a console Hangman word guessing game in Java: tracking masked word state with character arrays, validating letter guesses, rendering multi-stage ASCII gallows diagrams, and managing win/loss conditions.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/23_hangman/Main.java`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Main.java` | Word Guessing Engine | Starter project stub for a full OOP Hangman game. |

---

## The concept in plain words
Hangman is a word-puzzle game where players attempt to uncover a secret word by guessing one letter at a time within a limited number of allowed mistakes. Each incorrect guess adds a limb to the gallows figure.

---

## Code
### `Main.java`
```java

public class Main {
    public static void main(String[] args) {
        
    }
}
```

---

## How it works
> [!note] Traced from the source, not executed.
> In the repository, `23_hangman/Main.java` is an empty starter stub. The complete architecture involves:
1. **Secret Word Selection**: Selecting a word from an array or reading words from an external file (`words.txt`).
2. **Word Masking**: Maintaining an `ArrayList<Character>` or `char[]` filled with underscores `_` representing unrevealed letters.
3. **Guess Processing**:
   - Reading character input via `scanner.next().toLowerCase().charAt(0)`.
   - Searching secret word for matching characters.
   - If found, uncovering matching positions in the masked array.
   - If not found, incrementing the wrong guess counter and printing gallows ASCII art.
4. **End Game**: Victory if no underscores remain; defeat if wrong guesses reach the maximum limit (e.g. 6).

---

## Sample Run
```text
********************
JAVA HANGMAN
********************
Word: _ _ _ _ _
Guess a letter: e
Correct!

Word: _ e _ _ _
Guess a letter: a
Wrong!
+---+
|   |
O   |
    |
   ===
Guesses left: 5
```

---

## Gotchas
> [!warning] Character Immutability in Strings
> Strings in Java are immutable; you cannot modify individual characters directly (`word[i] = c` is illegal). Use `char[]` or `StringBuilder` for mutable in-place character updates.

---

## Key Takeaways
- String indexing and character array conversion (`toCharArray()`) make character replacement simple.
- Directly mirrors the procedural C version in `PROJ - Hangman`, highlighting Java's object-oriented readability advantages.

---

## My notes
> [!question]- My notes

## Related
- [[PROJ - Hangman]] - C counterpart project
- [[OOP BRO Basics 03 - strings]] - String methods and manipulation
- [[OOP BRO Basics 11 - quiz game]] - Interactive console game loops
