---
title: "OOP BRO Basics 03 - strings"
aliases:
  - Java Basics 03
  - String Methods and Slicing
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/control-flow
  - topic/data-types
  - topic/strings
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - arString.java
  - asSubString.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 02 - arithmetic math and mini programs]]"
next: "[[OOP BRO Basics 04 - conditionals]]"
related:
  - "[[OOP BRO Basics 01 - output types and input]]"
  - "[[OOP BRO 23 - hangman]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 03 - strings

> [!abstract] Summary
> Explores Java's `String` reference data type, essential string inspection and transformation methods (`length`, `charAt`, `indexOf`, `toUpperCase`, `trim`, `replace`), string equality checking, and substring extraction techniques.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `arString.java` | Core String utility methods | `.length()`, `.charAt()`, `.indexOf()`, `.equals()`, `.isEmpty()`, `.trim()`, `.replace()`. |
| `asSubString.java` | Substring indexing | Extracting username and email domain via `.substring(begin, end)`. |

---

## 1. `arString.java` — Core String Inspection & Mutation
### What it does
Performs condition checks and demonstrations of the standard Java String API.
### Code
```java
public class arString {
    public static void main(String[] args) {
        String name = "Bro Code";

        if (name.isEmpty()) System.out.println("String is empty");
        else System.out.println(name);
        
        if (name.equals("Bro Code")) System.out.println("String is equal");
        else System.out.println("String is not equal");
        
        int length = name.length();
        System.out.println(length);

        char letter = name.charAt(0);
        System.out.println("Char at index 0 : " + letter);

        int index = name.indexOf(" ");
        System.out.println("Index of ' ': " + index);

        int lastIndex = name.lastIndexOf("o");
        System.out.println("Last index of 'o': " + lastIndex);

        name = name.toUpperCase();
        System.out.println(name);

        name = name.toLowerCase();
        System.out.println(name);

        name = name.trim();
        System.out.println(name);

        name = name.replace("o", "a");
        System.out.println(name);
    }
}
```
### How it works
- `isEmpty()`: Checks whether string length is 0.
- `equals("Bro Code")`: Performs character-by-character value equality (unlike `==` which compares reference memory addresses).
- `charAt(index)`: Returns the `char` at the specified zero-based index.
- `indexOf(" ")` / `lastIndexOf("o")`: Scans for the first/last occurrence of a character or substring and returns its index.
- `trim()`: Removes leading and trailing whitespace.
- `replace("o", "a")`: Returns a new string with target characters replaced.

---

## 2. `asSubString.java` — Slicing Substrings
### What it does
Tokenizes an email address into username and domain components using index boundaries.
### Code
```java
public class asSubString {
    public static void main(String[] args) {
        String email = "example123@gmail.com";
        String username = email.substring(0, email.indexOf("@"));
        String domain = email.substring(email.indexOf("@") + 1);
        
        System.out.println("Username: " + username);
        System.out.println("Domain: " + domain);
    }
}
```
### How it works
- `email.indexOf("@")`: Finds the separator boundary.
- `email.substring(0, index)`: Extracts characters starting from index `0` up to (but not including) the `@` index.
- `email.substring(index + 1)`: Overloaded variant extracting from after the `@` symbol through the remainder of the string.

---

## Sample Run
```text
Bro Code
String is equal
8
Char at index 0 : B
Index of ' ': 3
Last index of 'o': 5
BRO CODE
bro code
Bro Code
Bra Cade
Username: example123
Domain: gmail.com
```

---

## Gotchas
> [!warning] String Equality: `==` vs `.equals()`
> In Java, strings are reference objects. Using `name == "Bro Code"` compares whether both references point to the exact same heap memory address, NOT whether they contain the same text! Always use `.equals()` or `.equalsIgnoreCase()` to compare string content.

---

## Key Takeaways
- Java `String` objects are immutable; methods like `.replace()` or `.toUpperCase()` return a new String rather than modifying the original in place.
- String indices are zero-based, and substring ranges are end-exclusive: `substring(begin, end)` includes `begin` but excludes `end`.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 01 - output types and input]] - Data types & printing
- [[OOP BRO 23 - hangman]] - String character masking
