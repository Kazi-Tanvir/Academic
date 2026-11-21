---
title: "OOP BRO 19 - exception"
aliases:
  - Java Exception Handling
  - Try Catch Finally
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/control-flow
  - topic/exceptions
  - topic/user-input
  - level/intermediate
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/19_exception/Main.java"
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 18 - array list]]"
next: "[[OOP BRO 20 - write files]]"
related:
  - "[[OOP BRO 20 - write files]]"
  - "[[OOP BRO 21 - read files]]"
  - "[[OOP BRO Basics 01 - output types and input]]"
created: 2026-11-21
status: draft
---
# OOP BRO 19 - exception

> [!abstract] Summary
> Explores structured exception handling in Java using `try`, `catch`, and `finally` blocks: intercepting runtime disruptions (`ArithmeticException`, `InputMismatchException`), printing error messages, and guaranteeing resource cleanup.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/19_exception/Main.java`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Main.java` | Exception Interception | Multi-catch handling division by zero, non-numeric input parsing errors, and closing `Scanner` in `finally`. |

---

## The concept in plain words
An **exception** is an disruptive event that occurs during program execution that breaks normal instruction flow. Exception handling intercepts these runtime errors gracefully, preventing sudden program crashes.

---

## Code
### `Main.java`
```java
import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Enter number to divide : ");
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            scanner.nextLine();
            System.out.println(a/b);
        } catch(InputMismatchException e){
            System.out.println("INVALID INPUT!!");
        } catch (ArithmeticException e) {
            System.out.println("Cannot divide by zero !!");
        } catch(Exception e){
            System.out.println("Something went wrong !");
        } finally{
            System.out.println("This runs everytime");
        }
    }    
}
```

---

## How it works
- `try { ... }`: Surrounds code capable of throwing an exception (e.g. division by integer 0 or invalid keyboard scanner parsing).
- `catch (ArithmeticException e)`: Specifically catches divide-by-zero errors.
- `catch (InputMismatchException e)`: Specifically catches non-integer user input.
- `catch (Exception e)`: Catch-all safety net for any other unanticipated exception.
- `finally { ... }`: Block guaranteed to run regardless of whether an exception occurred, used here to close `scanner.close()`.

---

## Sample Run
```text
Enter a whole number to divide: 10
Enter a whole number to divide by: 0
You can't divide by zero! IDIOT!
This will always execute
```

---

## Gotchas
> [!warning] Catch Order Hierarchy
> Subclass exceptions must always be caught *before* general superclass exceptions:
> Placing `catch (Exception e)` before `catch (ArithmeticException e)` will cause a compiler error because the specific handler becomes unreachable!

---

## Key Takeaways
- Never let unhandled exceptions crash production programs.
- The `finally` block always executes—ideal for releasing system resources, streams, and file handles.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 20 - write files]] - Handling IOExceptions in file writing
- [[OOP BRO 21 - read files]] - Handling FileNotFoundException
- [[OOP BRO Basics 01 - output types and input]] - Scanner handling
