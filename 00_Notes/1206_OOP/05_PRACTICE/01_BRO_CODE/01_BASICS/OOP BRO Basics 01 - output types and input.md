---
title: "OOP BRO Basics 01 - output types and input"
aliases:
  - Java Basics 01
  - Java Output and Input
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/data-types
  - topic/user-input
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - aaPrint.java
  - abDataType.java
  - acInput.java
  - adIssueIntChar.java
  - aoPrintf.java
up: "[[OOP BRO - Index]]"
next: "[[OOP BRO Basics 02 - arithmetic math and mini programs]]"
related:
  - "[[OOP BRO Basics 02 - arithmetic math and mini programs]]"
  - "[[OOP BRO 17 - wrapper class]]"
  - "[[Setup - Build and run Java]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 01 - output types and input

> [!abstract] Summary
> Explores fundamental Java console output, standard primitive data types, keyboard stream reading via `Scanner`, the infamous newline consumption bug when mixing integers with strings, and formatted `printf` width/precision specifiers.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `aaPrint.java` | Console output stream | `System.out.println()` vs `System.out.print()`, escape characters. |
| `abDataType.java` | Primitive data types | Variable declaration, memory sizes (`int`, `double`, `char`, `boolean`), strings. |
| `acInput.java` | Keyboard input via `Scanner` | `Scanner(System.in)`, `nextLine()`, `nextInt()`, `nextDouble()`. |
| `adIssueIntChar.java` | Scanner newline trap | Resolving leftover `\n` when reading a numeric primitive prior to text. |
| `aoPrintf.java` | Formatted output | Format specifiers (`%d`, `%f`, `%s`, `%.2f`), width padding, flags. |

---

## 1. `aaPrint.java`
### What it does
Demonstrates writing text to the standard output console stream (`System.out`).
### Code
```java

public class aaPrint {
    public static void main(String[] args){
        System.out.println("This has a auto new line " + 5 + " And its similar to python");
        System.err.printf("This works similar to C %d\n", 5);
        System.out.print("This does not have auto new line " + 5 + " And its similar to python");
    }
}
```
### How it works
- `System.out.println()` outputs the provided string followed by a platform-specific newline (`\n` on Unix, `\r\n` on Windows).
- `System.out.print()` outputs text without advancing to a new line, allowing successive prints on the same terminal line.
### Output
```text
I like Pizza
Its really good
buy me a pizza
```

---

## 2. `abDataType.java`
### What it does
Declares, initializes, and prints Java's fundamental primitive types alongside reference `String` objects.
### Code
```java
public class abDataType {
    public static void main(String[] args) {
        int myNum = 5; // Integer (whole number)
        float myFloatNum = 5.99f; // Floating point number
        char myLetter = 'D'; // Character
        boolean myBool = true; // Boolean
        String myText = "Hello"; // String

        System.out.println(myNum);
        System.err.println(myFloatNum);
        System.out.println(myLetter);
        System.out.println(myBool);
        System.out.println(myText);
    }
}
```
### How it works
- **Primitive Types**: Stored directly by value on the stack.
  - `int`: 32-bit signed two's complement integer.
  - `double`: 64-bit IEEE 754 floating-point decimal.
  - `char`: 16-bit Unicode character enclosed in single quotes (`'A'`).
  - `boolean`: Logical literal (`true` or `false`).
- **Reference Types**: `String` is an immutable object reference pointing to a character sequence in the heap's string pool.
### Output
```text
your age is 20
your cgpa is 3.5
your grade is A
Are you a student ? : true
Your Name is : Bro code
```

---

## 3. `acInput.java`
### What it does
Prompts the user and reads diverse primitive data types and text lines using `java.util.Scanner`.
### Code
```java
import  java.util.Scanner;

public class acInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter your name : ");
        String name = scanner.nextLine();

        System.out.println("Enter your age : ");
        int age = scanner.nextInt();

        System.out.println("Hello "+ name + ", you are " + age + " years old");

        scanner.close();
    }
}
```
### How it works
- Instantiates `Scanner scanner = new Scanner(System.in);` reading standard input.
- `scanner.nextLine()` reads an entire line of text until a newline character.
- `scanner.nextInt()`, `scanner.nextDouble()`, and `scanner.nextBoolean()` tokenize and parse primitives directly.
- `scanner.close()` closes the underlying stream.
### Output (Sample Run)
```text
What is your name: Tanvir
Your Name is Tanvir
what is your age : 20
Your age is : 20
what is your gpa : 3.75
your gpa is : 3.75
Are you a student (true/false) : true
Student : true
```

---

## 4. `adIssueIntChar.java`
### What it does
Exposes and solves the standard Java Scanner newline buffer bug when parsing text after a number.
### Code
```java
import java.util.Scanner;

public class adIssueIntChar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter your age : ");
        int age = scanner.nextInt();

        scanner.nextLine(); // this shit is needed becuase there will be \n [ new line char] after the int input so we need to clear that fucking buffer problem is similar to using [^\n] in scanf in c

        System.out.println("Enter your name : ");
        String name = scanner.nextLine();

        System.out.println("Your name is " + name + " your age is " + age);

        scanner.close();


    }
}
```
### How it works & The Gotcha
> [!warning] The `Scanner.nextInt()` Newline Trap
> When the user inputs `42` followed by the Enter key, `scanner.nextInt()` extracts only the numeric characters `42` from the input buffer. The carriage return / newline `\n` remains sitting unread in the buffer.
> A subsequent call to `scanner.nextLine()` immediately detects that remaining `\n`, interprets it as an empty line, and terminates without waiting for user input!
> **The Fix**: Call an empty `scanner.nextLine();` immediately after numeric input to flush the newline token.
### Output (Sample Run)
```text
enter a number : 42
enter a word : Hello
Your number is : 42
Your word is : Hello
```

---

## 5. `aoPrintf.java`
### What it does
Applies C-style format strings to Java console printing via `System.out.printf()`.
### Code
```java
public class aoPrintf {
    public static void main(String[] args) {
        // %[flags][width][.precision][specifier=character]
        System.out.printf("This is an precision : %.2f\n", 42.43);
        System.out.printf("This is an width : %10d\n", 42);
        System.out.printf("This is an width and precision : %10.2f\n", 42.43);
        System.out.printf("This is an flag : %+.2f\n", 42.43);
    }
}
```
### How it works
- Uses format specifiers: `%s` (string), `%c` (char), `%d` (integer), `%f` (floating-point), `%b` (boolean).
- Precision specifiers like `%.2f` round floating-point values to 2 decimal places.
### Output
```text
Hello Bro
your age is 20
your gpa is 3.50
your grade is A
Are you a student true
```

---

## Key Takeaways
- Always close or safely scope `Scanner` streams.
- Always flush the newline buffer with `scanner.nextLine()` after calling `nextInt()`, `nextDouble()`, or `next()`.
- Primitives store raw binary values directly on the stack; Strings hold heap memory addresses.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 02 - arithmetic math and mini programs]] - Math operations & Random
- [[OOP BRO 17 - wrapper class]] - Object wrappers for primitives
- [[Setup - Build and run Java]] - Compilation guide
