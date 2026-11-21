---
title: "OOP BRO Basics 07 - methods overloading and scope"
aliases:
  - Java Basics 07
  - Methods and Variable Scope
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/functions
  - topic/method-overloading
  - topic/varargs
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - bnMethod.java
  - boOverloadMethod.java
  - bpBakePizza.java
  - bqScope.java
  - bwVarargs.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 06 - loops]]"
next: "[[OOP BRO Basics 08 - arrays]]"
related:
  - "[[OOP BRO 01 - class object]]"
  - "[[OOP BRO 03 - overload constructor]]"
  - "[[OOP BRO Basics 09 - bank program]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 07 - methods overloading and scope

> [!abstract] Summary
> Explores method declaration in Java, parameter passing, return values, compile-time polymorphism through method overloading (varying parameter signatures), variable scope rules (local vs class-level), and variable-length argument lists (`varargs`).

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `bnMethod.java` | Basic method mechanics | Defining void and value-returning static methods, parameters vs arguments. |
| `boOverloadMethod.java` | Arithmetic method overloading | Same method name (`add`) with different parameter counts (`2`, `3`, `4`) and types. |
| `bpBakePizza.java` | Practical method overloading | `bakePizza()` with optional crust, sauce, cheese, and topping combinations. |
| `bqScope.java` | Variable lifetime & scope | Local variable isolation inside blocks vs class/field scope. |
| `bwVarargs.java` | Variable arguments (`...`) | Methods accepting variable number of arguments treated as an array. |

---

## 1. Method Definition and Calling (`bnMethod.java`)
### Code
```java
public class bnMethod {
    public static void main(String[] args) {
        happyBirthday("John", 25);
        square(5);
        cube(3);
        fullName("John", "Doe");
        ageCheck(20);
    }
    static void happyBirthday(String name, int age){
        System.out.println("Happy Birthday " + name + "!");
        System.out.println("You are now " + age + " years old!");
    }

    static void square(int num){
        System.out.println(num * num);
    }

    static void cube(int num){
        System.out.println(num * num * num);
    }

    static void fullName(String firstName, String lastName){
        System.out.println("Your full name is " + firstName + " " + lastName);
    }

    static void ageCheck(int age){
        if (age >= 18){
            System.out.println("You are an adult.");
        } else {
            System.out.println("You are a minor.");
        }
    }
}
```
### How it works
- Methods bundle reusable code blocks.
- `static` methods belong to the class rather than instances, allowing direct invocation from `main`.
- Return types specify what value must be returned with `return`; `void` indicates no returned value.

---

## 2. Method Overloading (`boOverloadMethod.java`, `bpBakePizza.java`)
### Code Excerpt (`boOverloadMethod.java`)
```java
public class boOverloadMethod {
    public static void main(String[] args) {
        System.out.println(add(5, 10));
        System.out.println(add(5, 10, 15));
    }
    
    static int add(int a, int b){
        return a + b;
    }
    static int add(int a, int b, int c){
        return a + b + c;
    }
}
```
### How it works
- **Method Signature**: Method name + parameter type list.
- Methods can share the exact same name as long as their signatures differ in parameter count or parameter data types.
- The Java compiler selects the appropriate version at compile time based on arguments supplied (static dispatch).

---

## 3. Variable Arguments / Varargs (`bwVarargs.java`)
### Code
```java
public class bwVarargs {
    public static void main(String[] args) {
        add(1, 2, 3, 4, 5);
    }

    public static void add(int... numbers) {
        int sum = 0;
        for (int number : numbers) {
            sum += number;
        }
        System.out.println("Sum: " + sum);
    }
}
```
### How it works
- Syntax `int... numbers` permits passing 0, 1, or many `int` arguments, or even a pre-constructed array.
- Inside the method, `numbers` behaves exactly like a 1D array (`int[]`).
- Only one `varargs` parameter is allowed per method, and it must always be the final parameter.

---

## Sample Run (`boOverloadMethod.java`)
```text
5
9
14
10.5
```

---

## Gotchas
> [!warning] Return Type Does NOT Overload
> Changing only the return type of a method without changing its parameter list is a compiler error:
> `int add(int a, int b)` vs `double add(int a, int b)` $\to$ compile error!

---

## Key Takeaways
- Overloaded methods provide flexibility while keeping intuitive API method naming.
- Local variables exist only while their enclosing block `Ellipsis` executes.
- `varargs` simplifies APIs by eliminating the need to write separate 2-arg, 3-arg, 4-arg overloads or manual array instantiations.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 03 - overload constructor]] - Constructor overloading
- [[OOP BRO Basics 08 - arrays]] - Arrays as underlying mechanism for varargs
- [[OOP BRO Basics 09 - bank program]] - Structuring code into modular functions
