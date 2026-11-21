---
title: "OOP BRO 17 - wrapper class"
aliases:
  - Java Wrapper Classes
  - Autoboxing and Unboxing
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/data-types
  - topic/wrapper-classes
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/17_wrapper_class/Main.java"
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 16 - composition]]"
next: "[[OOP BRO 18 - array list]]"
related:
  - "[[OOP BRO Basics 01 - output types and input]]"
  - "[[OOP BRO 18 - array list]]"
  - "[[OOP BRO Basics 03 - strings]]"
created: 2026-11-21
status: draft
---
# OOP BRO 17 - wrapper class

> [!abstract] Summary
> Explores Java Wrapper Classes (`Integer`, `Double`, `Character`, `Boolean`): converting primitive data types into reference objects via Autoboxing, retrieving primitives via Unboxing, and utilizing parsing utility methods (`Integer.parseInt()`).

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/17_wrapper_class/Main.java`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Main.java` | Autoboxing & Utility Parsing | Primitive-to-reference boxing, string-to-number parsing (`Integer.parseInt`), character inspection methods (`Character.isLetter`). |

---

## The concept in plain words
Java has two category domains: **primitive types** (`int`, `char`, `double`, `boolean`) and **reference types** (objects). Generic collections like `ArrayList` cannot store primitives; wrapper classes provide an object box wrapping a primitive value.

---

## Code
### `Main.java`
```java
public class Main {
    public static void main(String[] args) {
        //Autoboxing
        Integer a = 123;
        Double b = 3.14;
        Character c = 'A';
        String d = "Hello";

        //Unboxing
        int x = a;
        double y = b;
        char z = c;
        String w = d;

        // Wrapper class methods
        String p = Integer.toString(123);
        String q = Double.toString(3.14);
        String r = Character.toString('A');

        // Wrapper class methods to convert String to primitive types
        int m = Integer.parseInt("123");
        double n = Double.parseDouble("3.14");
        boolean o = Boolean.parseBoolean("true");
        String str = p + " " + q + " " + r + " " ;
        System.out.println(str);

        char letter = 'A';
        System.out.println(Character.isUpperCase(letter)); // true
        System.out.println(Character.isLetter(letter)); // true

    }
}
```

---

## How it works
- **Autoboxing**: Automatic conversion of a primitive value into its corresponding wrapper object (`Integer a = 123;`).
- **Unboxing**: Automatic extraction of the primitive value from the wrapper object (`int x = a;`).
- **Utility Methods**:
  - `Integer.parseInt("123")`: Converts string representation to primitive `int`.
  - `Double.parseDouble("3.14")`: Converts string to `double`.
  - `Character.isLetter('a')` / `Character.isDigit('5')`: Validates character categories.

---

## Sample Run
```text
123
3.14
a
true
123
true
```

---

## Gotchas
> [!warning] Reference Comparison with `==`
> Wrapper objects are reference types. Comparing two `Integer` objects with `==` compares their memory addresses, not their numerical values (except for small cached values between -128 and 127). Always use `.equals()` to compare wrapper values!

---

## Key Takeaways
- Wrapper classes bridge primitive data types with object-oriented APIs (like Collections).
- Provide essential parsing utilities for user string inputs.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 01 - output types and input]] - Primitive data types
- [[OOP BRO 18 - array list]] - Using wrappers in generic collections
- [[OOP BRO Basics 03 - strings]] - Parsing strings to numbers
