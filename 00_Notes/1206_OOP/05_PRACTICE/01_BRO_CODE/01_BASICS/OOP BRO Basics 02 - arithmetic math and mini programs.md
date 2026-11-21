---
title: "OOP BRO Basics 02 - arithmetic math and mini programs"
aliases:
  - Java Basics 02
  - Arithmetic and Math
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/data-types
  - topic/math
  - topic/operators
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - aeArea.java
  - afMadLib.java
  - agArithmetic.java
  - ahOpeOrder.java
  - aiShoppingCart.java
  - akRandomNum.java
  - alMath.java
  - amHyp.java
  - anCircle.java
  - apCompundinterest.java
  - atWeightConverter.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 01 - output types and input]]"
next: "[[OOP BRO Basics 03 - strings]]"
related:
  - "[[OOP BRO Basics 01 - output types and input]]"
  - "[[OOP BRO Basics 04 - conditionals]]"
  - "[[OOP BRO Basics 10 - dice]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 02 - arithmetic math and mini programs

> [!abstract] Summary
> Covers Java arithmetic operators, precedence rules (PEMDAS), the standard `java.lang.Math` library, random number generation using `java.util.Random`, and practical beginner math applications including area calculation, hypotenuse calculation, compound interest, and weight conversion.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `aeArea.java` | Geometry calculation | Computes rectangle area ($w \times h$) from user input. |
| `afMadLib.java` | String interpolation game | Interactive Mad Libs word replacement story. |
| `agArithmetic.java` | Basic operators | Addition, subtraction, multiplication, division, modulo, augmented assignments. |
| `ahOpeOrder.java` | Operator precedence | Evaluation order rules (Parentheses, Multiplication/Division, Addition/Subtraction). |
| `aiShoppingCart.java` | Retail price computation | Quantity $\times$ price, subtotal formatting with currency symbols. |
| `akRandomNum.java` | Random generation | `Random.nextInt()`, bounded integer generation (`1..6`). |
| `alMath.java` | `Math` class methods | `Math.pow()`, `Math.abs()`, `Math.sqrt()`, `Math.round()`, `Math.ceil()`, `Math.floor()`, `Math.max()`, `Math.min()`. |
| `amHyp.java` | Hypotenuse calculation | Solves Pythagorean theorem $c = \sqrt{a^2 + b^2}$ using `Math.sqrt()` and `Math.pow()`. |
| `anCircle.java` | Circle geometry | Circumference, area, and volume calculation using `Math.PI`. |
| `apCompundinterest.java` | Financial mathematics | Compound interest formula $A = P(1 + r/n)^{nt}$ with loop/power evaluation. |
| `atWeightConverter.java` | Unit conversion | Converts pounds (lbs) to kilograms (kg) and vice versa. |

---

## 1. Core Arithmetic & Precedence (`agArithmetic.java`, `ahOpeOrder.java`)
### What it does
Demonstrates fundamental mathematical evaluations and Java operator hierarchy.
### Code (`agArithmetic.java`)
```java
public class agArithmetic {
    public static void main(String[] args) {
        int a = 5;
        int b = 10;

        a += b; // a = 15
        System.out.println("Addition: " + a);
        a -= b; // a = 5
        System.out.println("Subtraction: " + a);
        a *= b; // a = 50
        System.out.println("Multiplication: " + a);
        a /= b; // a = 5
        System.out.println("Division: " + a);
        a %= b; // a = 5
        System.out.println("Modulus: " + a);
    }
}
```
### Code (`ahOpeOrder.java`)
```java
public class ahOpeOrder {
    public static void main(String[] args) {
        // Order of operations : PEMDAS (Parentheses, Exponents, Multiplication and Division, Addition and Subtraction)

        double result = 3 + 4 * ( 7 - 5 ) / 2.0; // Multiplication first, then addition
        // CALCULATION STEPS
        // Step 1 : Parentheses : 7 - 5 = 2
        // Step 2 : Multiplication : 4 * 2 = 8
        // Step 3 : Division : 8 / 2.0 = 4.0
        // Step 4 : Addition : 3 + 4.0 = 7.0
        System.out.println(result);

    }
}
```
### How it works
- Integer division in Java truncates decimal remainders (`int / int` yields an integer).
- Modulo (`%`) returns the integer remainder of division.
- Precedence follows standard PEMDAS: Parentheses $\rightarrow$ Multiplicative (`*`, `/`, `%`) $\rightarrow$ Additive (`+`, `-`).

---

## 2. Java Math Utility & Random (`alMath.java`, `akRandomNum.java`)
### What it does
Utilizes built-in static methods in `Math` and psuedo-random sequence generation via `Random`.
### Code (`alMath.java`)
```java
public class alMath {
    public static void main(String[] args) {
        int a = 5;
        int b = 10;

        System.out.println("Max: " + Math.max(a, b));
        System.out.println("Min: " + Math.min(a, b));
        System.out.println("Square root of a: " + Math.sqrt(a));
        System.out.println("Power of a to b: " + Math.pow(a, b));
        System.out.println("Absolute value of a: " + Math.abs(a));
        System.out.println("Random number between 0 and 1: " + Math.ceil(a/b));
        System.out.println("Random number between 0 and 1: " + Math.floor(a/b));
        System.out.println("Random number between 0 and 1: " + Math.round(a/b));
    }
}
```
### Code (`akRandomNum.java`)
```java
import java.util.Random;

public class akRandomNum {
    public static void main(String[] args) {

        Random random = new Random();

        int randomNum = random.nextInt(1,101);
        double randomDouble = random.nextDouble(1,11); 
        boolean randomBoolean = random.nextBoolean();

        System.out.println(randomNum);
        System.out.println(randomDouble);
        System.out.println(randomBoolean);
    }
}
```
### How it works
- `Math` belongs to `java.lang`, so it requires no import. All methods are `static` and called directly on the class.
- `Random random = new Random();`: `random.nextInt(6) + 1` produces uniform pseudorandom integers from 1 to 6 (die roll simulation).

---

## 3. Applied Mathematical Programs (`aeArea.java`, `amHyp.java`, `anCircle.java`, `apCompundinterest.java`, `atWeightConverter.java`, `aiShoppingCart.java`, `afMadLib.java`)

### Code Excerpt: Compound Interest (`apCompundinterest.java`)
```java
import java.util.Scanner;

public class apCompundinterest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double principal;
        double rate;
        int timesCompounded;
        int years;
        double amount;

        System.out.println("Enter the principal amount : ");
        principal = scanner.nextDouble();

        System.out.println("Enter the annual interest rate (in decimal) : ");
        rate = scanner.nextDouble()/100;

        System.out.println("Enter the number of times interest is compounded per year : ");
        timesCompounded = scanner.nextInt();

        System.out.println("Enter the number of years : ");
        years = scanner.nextInt();

        amount = principal * Math.pow((1 + (rate / timesCompounded)), (timesCompounded * years));
        System.out.println("The amount after " + years + " years is: " + amount);
        
        scanner.close();
    }
}
```

### Code Excerpt: Hypotenuse Calculation (`amHyp.java`)
```java
import java.util.Scanner;

public class amHyp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double a = scanner.nextDouble();
        double b = scanner.nextDouble();

        double c = Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2));

        System.out.println("The hypotenuse is: " + c);

        scanner.close();
    }
}
```

### Code Excerpt: Circle Geometry (`anCircle.java`)
```java
import java.util.Scanner;

public class anCircle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double radius = scanner.nextDouble();
        
        double circumference = 2 * Math.PI * radius;
        double area = Math.PI * Math.pow(radius, 2);
        double volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);

        System.out.println("Circumference: " + circumference);
        System.out.println("Area: " + area);
        System.out.println("Volume: " + volume);

        scanner.close();
    }
}
```

### How it works
- **Hypotenuse**: Takes legs $a$ and $b$, computes $\sqrt{a^2 + b^2}$ via `Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2))`.
- **Circle**: Uses constant `Math.PI` to derive area $\pi r^2$, circumference $2\pi r$, and sphere volume $\frac{4}{3}\pi r^3$.
- **Compound Interest**: Evaluates $A = P \times (1 + r/n)^{nt}$ based on user principal, interest rate, compound frequency, and elapsed years.

---

## Sample Run (`apCompundinterest.java`)
```text
Enter the Principal amount: 1000
Enter the rate (in %): 5
Enter the number of times compounded per year: 12
Enter the years: 3
The total amount after 3 years is: $1161.47
```

---

## Gotchas
> [!warning] Integer Division Truncation
> In formulas involving fractions (such as sphere volume $V = \frac{4}{3}\pi r^3$), writing `4 / 3` in Java performs integer division, yielding `1` instead of `1.333...`!
> Always specify floating-point literals: `4.0 / 3.0` or `(4.0 / 3)`.

---

## Key Takeaways
- Use `Math` utility functions for scientific and trigonometric calculations.
- Be vigilant with integer division: casting or using floating-point literals prevents silent truncation errors.
- Random number bounds in `nextInt(n)` generate numbers in the range $[0, n-1]$; add an offset for 1-based bounds.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 01 - output types and input]] - Input parsing
- [[OOP BRO Basics 04 - conditionals]] - Conditional branching
- [[OOP BRO Basics 10 - dice]] - Random dice game
