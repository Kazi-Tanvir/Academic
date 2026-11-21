---
title: "OOP BRO 05 - static"
aliases:
  - Java Static Keyword
  - OOP 05 - static
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/class-object
  - topic/static
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/05_static"
files:
  - Friend.java
  - Main.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 04 - array of objects]]"
next: "[[OOP BRO 06 - inheritance]]"
related:
  - "[[OOP BRO 01 - class object]]"
  - "[[OOP BRO 02 - constructor]]"
  - "[[OOP BRO 06 - inheritance]]"
created: 2026-11-21
status: draft
---
# OOP BRO 05 - static

> [!abstract] Summary
> Explores the `static` modifier in Java: defining class-level variables and methods that belong to the class itself rather than individual instances, tracking shared global state (e.g. instance counters), and calling static methods without creating objects.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/05_static`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Friend.java` | Static Counter & Methods | Declares `static int numOfFriends` incremented in constructor; static `showFriends()` method. |
| `Main.java` | Class-Level Invocation | Instantiates three friends and invokes `Friend.showFriends()` directly via the class name. |

---

## The concept in plain words
The `static` keyword denotes members that belong to the **class** as a whole rather than to any specific instance. There is only **one** copy of a static variable, shared across all instances of that class.

> [!info] Java vs C: Static Variables
> In C, `static` restricts a variable's visibility to the translation unit (file scope) or preserves state across function calls. In Java, `static` attached to a class member means it is shared among all instances and can be accessed without creating any object (`ClassName.member`).

---

## Memory picture
```text
METASPACE / CLASS AREA
+-----------------------------------+
| Friend.class                      |
| - static numOfFriends: 3          |
| - static showFriends()            |
+-----------------------------------+
             ^
             | (shared by all instances)
HEAP         |
+--------------------+   +--------------------+   +--------------------+
| Friend (friend1)   |   | Friend (friend2)   |   | Friend (friend3)   |
| - name: "Spongebob"|   | - name: "Patrick"  |   | - name: "Squidward"|
+--------------------+   +--------------------+   +--------------------+
```

---

## Code
### `Friend.java`
```java
public class Friend {
    static int numOfFriends;
    // static diye ekta variable or method ke object er bodole class er property banai     
    String name;

    Friend(String name){
        this.name = name;
        numOfFriends++;
    }

    static void showFriends(){
        System.out.println("You have "+numOfFriends+" total friends");
    }
}
```

### `Main.java`
```java

public class Main {
    public static void main(String[] args) {

        Friend friend1 = new Friend("Shopngebob");
        Friend friend2 = new Friend("Shopngebob");
        
        Friend.showFriends();
    }
}
```

---

## How it works
- In `Friend.java`, `static int numOfFriends;` is initialized once when the class is loaded.
- Every time `new Friend(...)` is called, the constructor executes `numOfFriends++`, accumulating the total number of objects created.
- `Friend.showFriends()` is called directly using the class name, without needing an object instance.

---

## Sample Run
```text
You have 3 friends
```

---

## Gotchas
> [!warning] Cannot Access Instance Members from Static Context
> Static methods cannot access instance variables or call non-static methods directly, because no `this` reference exists in a static context!
> `Friend.name` $\to$ compile error!

---

## Key Takeaways
- Use `static` variables for shared constants (`Math.PI`) or shared class-level state (instance counters).
- Use `static` methods for utility functions that depend only on their arguments (`Math.sqrt()`).
- Always access static members through the class name (`Friend.showFriends()`), not through object instances.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 01 - class object]] - Instance variables vs class variables
- [[OOP BRO 02 - constructor]] - Mutating static state inside constructors
- [[OOP BRO 06 - inheritance]] - How static members interact with class hierarchies
