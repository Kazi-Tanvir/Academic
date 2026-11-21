---
title: "OOP BRO Basics 05 - logical operators"
aliases:
  - Java Basics 05
  - Boolean Logic
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/control-flow
  - topic/operators
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - bbLogicalOperator.java
  - bcLogOpeSunnyHealthy.java
  - bdLogOpeUsername.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 04 - conditionals]]"
next: "[[OOP BRO Basics 06 - loops]]"
related:
  - "[[OOP BRO Basics 04 - conditionals]]"
  - "[[OOP BRO Basics 06 - loops]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 05 - logical operators

> [!abstract] Summary
> Details Java boolean logical operators — AND (`&&`), OR (`||`), and NOT (`!`) — examining compound truth conditions, short-circuit evaluation semantics, and real-world input validation rules.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `bbLogicalOperator.java` | AND & OR operators | Temperature range evaluation (`temp <= 30 && temp >= 0`). |
| `bcLogOpeSunnyHealthy.java` | NOT operator | Inverting boolean flags (`!isSunny`, `!isHealthy`). |
| `bdLogOpeUsername.java` | Validation compound logic | Username character length checks and whitespace prohibition. |

---

## 1. `bbLogicalOperator.java` — AND (`&&`) & OR (`||`)
### Code
```java
public class bbLogicalOperator {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int c = 30;

        boolean result1 = (a < b) && (b > c); // false
        boolean result2 = (a > b) || (b < c); // true
        boolean result3 = !(a == b); // true

        System.out.println("Result 1: " + result1);
        System.out.println("Result 2: " + result2);
        System.out.println("Result 3: " + result3);
    }
}
```
### How it works
- **AND (`&&`)**: Evaluates to `true` if and only if **both** operands are `true`.
- **OR (`||`)**: Evaluates to `true` if **at least one** operand is `true`.
- **Short-circuiting**: In `a && b`, if `a` is `false`, Java never evaluates `b`. In `a || b`, if `a` is `true`, Java never evaluates `b`.

---

## 2. `bcLogOpeSunnyHealthy.java` — Logical Inversion (`!`)
### Code
```java
public class bcLogOpeSunnyHealthy {
    public static void main(String[] args) {
        boolean isSunny = true;
        boolean isHealthy = false;

        if (isSunny && isHealthy) {
            System.out.println("It's a sunny and healthy day!");
        } else if (isSunny || isHealthy) {
            System.out.println("It's either sunny or healthy.");
        } else {
            System.out.println("It's neither sunny nor healthy.");
        }
    }
}
```
### How it works
- The unary NOT operator (`!`) flips a boolean value: `!true` becomes `false`, and `!false` becomes `true`.

---

## 3. `bdLogOpeUsername.java` — String Form Validation
### Code
```java
import java.util.Scanner;

public class bdLogOpeUsername {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your username: ");
        String username = scanner.nextLine();

        if(username.length() < 4 || username.length() > 12) 
            System.out.println("Username must be between 5 and 15 characters.");
        
        else if(username.contains(" ") || username.contains("_")) 
            System.out.println("Username cannot contain spaces or underscores.");
        else 
            System.out.println("Username is valid.");
        
        if(username.isEmpty()) 
            System.out.println("Username cannot be empty.");
        else 
            System.out.println("Your username is: " + username);

        scanner.close();
    }
        
}
```
### How it works
- Uses compound conditions to validate input:
  `if (username.length() < 4 || username.length() > 12)`
  `if (username.contains(" ") || username.contains("_"))`
- Rejects names outside length boundaries or containing forbidden delimiters.

---

## Sample Run (`bdLogOpeUsername.java`)
```text
Enter your username: tanvir
Username is valid: tanvir
```

---

## Key Takeaways
- Use `&&` when all constraints must be satisfied simultaneously.
- Use `||` when any single qualifying condition is sufficient.
- Take advantage of short-circuit evaluation to place guard checks (e.g. `obj != null && obj.isValid()`) without risking NullPointerExceptions.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 04 - conditionals]] - Decision branching
- [[OOP BRO Basics 06 - loops]] - Loop condition logic
