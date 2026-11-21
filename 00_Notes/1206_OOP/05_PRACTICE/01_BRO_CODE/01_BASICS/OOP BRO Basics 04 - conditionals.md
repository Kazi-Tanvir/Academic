---
title: "OOP BRO Basics 04 - conditionals"
aliases:
  - Java Basics 04
  - Branching and Conditionals
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
  - ajIfElse.java
  - aqNestedIfElse.java
  - auTerEvenOdd.java
  - avTerPassFail.java
  - awTerAMPM.java
  - axTerTaxRate.java
  - ayTerConvertFtoC.java
  - azSwitchWeekEnd.java
  - baSwitchCalc.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 03 - strings]]"
next: "[[OOP BRO Basics 05 - logical operators]]"
related:
  - "[[OOP BRO Basics 05 - logical operators]]"
  - "[[OOP BRO Basics 06 - loops]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 04 - conditionals

> [!abstract] Summary
> Comprehensive study of Java decision-making structures across three paradigms: standard and nested `if/else` statements, concise inline ternary operators (`? :`), and multi-way branch `switch` statements.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Structure | Key Highlights |
| :--- | :--- | :--- |
| `ajIfElse.java` | `if / else if / else` | Age category verification (Senior, Adult, Child). |
| `aqNestedIfElse.java` | Nested conditionals | Dependent conditions: student status within employment status. |
| `auTerEvenOdd.java` | Ternary operator | `(num % 2 == 0) ? "Even" : "Odd"`. |
| `avTerPassFail.java` | Ternary operator | `(score >= 60) ? "PASS" : "FAIL"`. |
| `awTerAMPM.java` | Ternary operator | Time classification `(hours < 12) ? "A.M." : "P.M."`. |
| `axTerTaxRate.java` | Ternary operator | Income tax rate scaling based on threshold. |
| `ayTerConvertFtoC.java` | Ternary conversion | Temperature scale conversion expression. |
| `azSwitchWeekEnd.java` | `switch` statement | Matching day strings to weekday vs weekend. |
| `baSwitchCalc.java` | `switch` calculator | Operator dispatch (`+`, `-`, `*`, `/`, `%`) evaluating arithmetic. |

---

## 1. Section I: Standard & Nested If/Else
### Code Excerpt (`ajIfElse.java`, `aqNestedIfElse.java`)
```java
public class ajIfElse {
    public static void main(String[] args) {
        int age = 20;
        String name = "John";
        boolean isGorbhoboti = true;
        if(isGorbhoboti) {
            System.out.println(name + " is a gorbhoboti Dhabian.");
            if (age >= 18) {
                System.out.println(name + " is an adult.");
            } 
            else if(age < 18) {
                System.out.println(name + " is a minor.");
            }
            else {
                System.out.println(name + " is still inside balls.");
            }
        } else {
            System.out.println(name + " is a bohiragoto.");
        }
    }

}
```
```java
public class aqNestedIfElse {
    public static void main(String[] args) {
        boolean isStudent = true;
        boolean isSenior = false;
        double price = 100.0;

        if(isStudent) {
            System.out.println("You are a student and you get a 20% discount.");
            isSenior = true;
            if(isSenior) {
                System.out.println("You are a senior student. and you get an extra 10% discount.");
                price *= 0.7; 
            } else {
                System.out.println("You are a junior student.");
                price *= 0.8; 
            }
        } else {
            System.out.println("You are not a student.");
        }

        System.out.println("Final price: " + price);

    }
}
```
### How it works
- Java evaluates Boolean expressions sequentially. When an `if` condition evaluates to `true`, its block executes and remaining branches are skipped.
- In `aqNestedIfElse`, inner conditions are guarded and only evaluated when the outer parent condition holds.

---

## 2. Section II: Ternary Operators (`? :`)
The ternary operator provides concise inline conditional assignment: `variable = (condition) ? valueIfTrue : valueIfFalse;`

### Code Excerpts
```java
// auTerEvenOdd.java
public class auTerEvenOdd {
    public static void main(String[] args) {
        int number = 10;
        String result = (number % 2 == 0) ? "Even" : "Odd";
        System.out.println("The number is: " + result);
    }
}

// avTerPassFail.java
public class avTerPassFail {
    public static void main(String[] args) {
        int score = 75;
        String result = (score >= 60) ? "Pass" : "Fail";
        System.out.println("The student has: " + result);
    }
}

// awTerAMPM.java
public class awTerAMPM {
    public static void main(String[] args) {
        int hour = 14; 
        String amPm = (hour >= 12) ? "PM" : "AM";
        System.out.println("The time is: " + hour + " " + amPm);
    }
}
```

---

## 3. Section III: Switch Statements (`azSwitchWeekEnd.java`, `baSwitchCalc.java`)
### Code (`baSwitchCalc.java`)
```java
public class baSwitchCalc {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 5;
        char operator = '+';
        double result;

        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = (double) num1 / num2;
                } else {
                    System.out.println("Error: Division by zero");
                    return;
                }
                break;
            default:
                System.out.println("Error: Invalid operator");
                return;
        }

        System.out.println("Result: " + result);
    }
}
```
### How it works
- `switch` evaluates primitive integers, characters, or `String` values.
- Each `case` specifies a discrete target value.
- Crucially, `break` prevents "fall-through" execution into subsequent cases.
- `default` executes if no preceding case matches.

---

## Gotchas
> [!warning] Missing `break` in Switch Statements
> If a `break;` statement is omitted at the end of a `case` block, Java continues executing code in subsequent cases even if their matching conditions are false.

---

## Key Takeaways
- Use `if/else` for range checks and complex relational boolean logic.
- Use ternary expressions for clean, single-line variable assignments.
- Use `switch` when testing a single variable against multiple fixed discrete constants.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 05 - logical operators]] - Compound logic (`&&`, `||`)
- [[OOP BRO Basics 06 - loops]] - Iterative control flow
