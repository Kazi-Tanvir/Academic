---
title: "OOP BRO 18 - array list"
aliases:
  - Java ArrayList
  - Dynamic Arrays
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/arrays
  - topic/collections
  - topic/user-input
  - level/intermediate
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/18_array_list/Main.java"
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 17 - wrapper class]]"
next: "[[OOP BRO 19 - exception]]"
related:
  - "[[OOP BRO Basics 08 - arrays]]"
  - "[[OOP BRO 17 - wrapper class]]"
  - "[[OOP BRO 04 - array of objects]]"
created: 2026-11-21
status: draft
---
# OOP BRO 18 - array list

> [!abstract] Summary
> Explores Java's dynamic resizable array collection `ArrayList<T>` from `java.util`: adding elements (`.add()`), random access (`.get()`), updating (`.set()`), deletion (`.remove()`), sorting via `Collections.sort()`, and dynamic population from user input.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/18_array_list/Main.java`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Main.java` | Dynamic Collection Operations | `ArrayList<String>`, `.add()`, `.remove()`, `.set()`, `.size()`, `Collections.sort()`, interactive console input loop. |

---

## The concept in plain words
Standard Java arrays have a fixed size allocated at creation time. An **`ArrayList`** is a resizable array implementation: it grows automatically as new elements are added and shrinks when elements are removed.

---

## Code
### `Main.java`
```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> fruits = new ArrayList<>();

        System.out.println("Enter the number of fruits you want ");
        int numOfFruits = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < numOfFruits; i++) {
            System.out.print("Enter the name of " + i + "th fruit :");
            String fruit = scanner.nextLine();
            fruits.add(fruit);
        }

        for (String fruit : fruits) {
            System.out.println(fruit);
        }

        fruits.remove(1);
        fruits.set(1, "notFruit");
        System.out.println(fruits.get(1));
        System.out.println(fruits.size());

        Collections.sort(fruits);
        System.out.println(fruits);

        scanner.close();
    }
}
```

---

## How it works
- `ArrayList<String> foods = new ArrayList<>();`: Instantiates an empty list holding `String` references.
- `foods.add("pizza");`: Appends to end of list.
- `foods.set(0, "sushi");`: Replaces element at index 0.
- `foods.remove(2);`: Removes element at index 2 and shifts remaining elements left.
- `Collections.sort(foods);`: Sorts elements in natural ascending alphabetical order.

---

## Sample Run
```text
Enter the number of foods: 3
Enter food #1: pizza
Enter food #2: burger
Enter food #3: taco
[burger, pizza, taco]
```

---

## Gotchas
> [!warning] Primitives Require Wrapper Types
> An `ArrayList` cannot hold primitive types directly: `ArrayList<int>` is invalid syntax. You must use wrapper types: `ArrayList<Integer>`.

---

## Key Takeaways
- `ArrayList` provides $O(1)$ random access by index and amortized $O(1)$ insertion at the end.
- Use `.size()` for element count (unlike `.length` on fixed arrays).

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 08 - arrays]] - Fixed-size arrays
- [[OOP BRO 17 - wrapper class]] - Wrapper objects for collections
- [[OOP BRO 04 - array of objects]] - Managing collections of objects
