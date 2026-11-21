---
title: "OOP BRO 02 - constructor"
aliases:
  - Java Constructors
  - OOP 02 - constructor
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/class-object
  - topic/constructors
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/02_constructor"
files:
  - Main.java
  - User.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 01 - class object]]"
next: "[[OOP BRO 03 - overload constructor]]"
related:
  - "[[OOP BRO 01 - class object]]"
  - "[[OOP BRO 03 - overload constructor]]"
  - "[[OOP BRO 07 - super]]"
created: 2026-11-21
status: draft
---
# OOP BRO 02 - constructor

> [!abstract] Summary
> Explains parameterized constructors in Java: special member methods invoked automatically upon object instantiation to initialize instance variables, eliminating manual field assignment and utilizing the `this` keyword to resolve parameter-field naming collisions.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/02_constructor`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `User.java` | Parameterized Constructor | `User(String username, String email, int age)` constructor with `this` assignments. |
| `Main.java` | Instantiation via Constructor | Creating multiple distinct `User` objects passing arguments at construction time. |

---

## The concept in plain words
A **constructor** is a special method with no return type that shares the exact name of the class. It executes whenever `new ClassName(...)` is called, ensuring that an object begins its lifecycle in a valid state.

> [!info] Java vs C: Initialization
> In C, initializing a struct typically requires writing an explicit init function (e.g. `init_user(&u, "alice", 25)`) or manually initializing fields one-by-one. In Java, constructors execute automatically upon instantiation with `new`, using `this` to bind constructor arguments directly to instance fields.

---

## Memory picture
```text
STACK                          HEAP
+-------------------+          +---------------------------+
| user1 (ref: 0x300)| -------> | User Object (at 0x300)    |
+-------------------+          | - username: "Spongebob"   |
| user2 (ref: 0x400)| ---\     | - email: "sponge@krab.com"|
+-------------------+     \    | - age: 30                 |
                           \   +---------------------------+
                                                         +---------------------------+
                             | User Object (at 0x400)    |
                             | - username: "Patrick"     |
                             | - email: "star@rock.com"  |
                             | - age: 35                 |
                             +---------------------------+
```

---

## Code
### `User.java`
```java
public class User {
    String username;
    String email;
    int age;
    boolean isEnrolled;


    User(String username, int age,String email){
        this.username = username;
        this.age = age;
        this.email = email;
        this.isEnrolled = true;
    }
    void displayInfo(){
        System.out.println(username);
        System.out.println(email);
        System.out.println(age);
    }

    void study(){
        System.out.println(username + " is currently studying!");
    }
}
```

### `Main.java`
```java
public class Main {
    public static void main(String[] args) {

        User user3 = new User("kazi Tanvir",18,"email");
        user3.displayInfo();
        
    }
}
```

---

## How it works
- In `User.java`, the constructor is declared as `User(String username, String email, int age)`.
- The keyword `this.username` refers explicitly to the instance field, distinguishing it from the parameter `username`.
- In `Main.java`, calling `new User("Spongebob", "sponge@krab.com", 30)` instantiates the object and immediately populates all three attributes.

---

## Sample Run
```text
Spongebob
sponge@krab.com
30
Patrick
star@rock.com
35
```

---

## Gotchas
> [!warning] Loss of Default No-Arg Constructor
> If you define any custom constructor (e.g., `User(String, String, int)`), the Java compiler no longer provides the automatic zero-argument `User()` constructor! If you still need a parameterless constructor, you must declare it explicitly.

---

## Key Takeaways
- Constructors have no return type and match the class name identically.
- Use `this.field = field;` to resolve naming ambiguity between parameters and instance variables.
- Constructors ensure mandatory object data is provided before any method can be executed on that instance.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 01 - class object]] - Object creation fundamentals
- [[OOP BRO 03 - overload constructor]] - Multiple constructor signatures
- [[OOP BRO 07 - super]] - Calling parent class constructors
