---
title: "OOP BRO 04 - array of objects"
aliases:
  - Java Array of Objects
  - OOP 04 - array of objects
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/arrays
  - topic/class-object
  - topic/loops
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/04_array_of_objects"
files:
  - Main.java
  - User.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 03 - overload constructor]]"
next: "[[OOP BRO 05 - static]]"
related:
  - "[[OOP BRO Basics 08 - arrays]]"
  - "[[LAB 30 - student app]]"
  - "[[OOP BRO 18 - array list]]"
created: 2026-11-21
status: draft
---
# OOP BRO 04 - array of objects

> [!abstract] Summary
> Demonstrates grouping custom class instances into fixed-size reference arrays (`User[]`), populating array indices with dynamically constructed objects, and iterating across the collection using standard and enhanced for-each loops.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/04_array_of_objects`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `User.java` | Data Model | Holds `name`, constructor, and helper `printName()` method. |
| `Main.java` | Object Array Management | Declares `User[] users = new User[3]`, instantiates elements, and traverses with for-each loop. |

---

## The concept in plain words
Just like primitive data types (`int[]`, `double[]`), custom classes can form array types (`User[]`). However, an array of objects in Java does **not** store the objects inline: it stores references (pointers) to objects residing elsewhere on the heap.

> [!info] Java vs C: Array of Structs vs Array of Objects
> In C, `struct User users[3];` allocates contiguous memory holding the full struct data inline. In Java, `User[] users = new User[3];` creates an array of *references* (pointers) initialized to `null`. Each element must then be individually instantiated with `new User(...)`.

---

## Memory picture
```text
STACK                       HEAP
+-------------------+       +---------------------------+
| users (ref: 0x50) | ----> | User[] Array (at 0x50)    |
+-------------------+       | [0]: ref 0x10 ------------|---> User Object ("Spongebob")
                            | [1]: ref 0x20 ------------|---> User Object ("Patrick")
                            | [2]: ref 0x30 ------------|---> User Object ("Sandy")
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

    User(){
        this.username = "Not Provided";
        this.age = 0;
        this.email = "Not Provided";
        this.isEnrolled = true;
    }
    User(String username){
        this.username = username;
        this.age = 0;
        this.email = "Not Provided";
        this.isEnrolled = true;
    }
    User(String username, int age){
        this.username = username;
        this.age = age;
        this.email = "Not Provided";
        this.isEnrolled = true;
    }
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
        User[] users = {
            new User("kazi Tanvir",18,"email"),
            new User("kazi Tanvir",18,"email"),
            new User("kazi Tanvir",18,"email")
        };

        for (User user : users) {
            user.username = "tanvir";
            user.age= 50;
        }
        for(User user : users){
            user.displayInfo();
        }
        
    }
}
```

---

## How it works
- `User[] users = new User[3];` allocates a 3-element reference array. All three slots initially contain `null`.
- `users[0] = new User("Spongebob");` instantiates a `User` object and assigns its reference to index 0.
- An enhanced for loop `for (User user : users)` iterates sequentially through the array and invokes `user.printName()`.

---

## Sample Run
```text
Spongebob
Patrick
Sandy
```

---

## Gotchas
> [!warning] NullPointerException on Empty Slots
> If an array index is left unassigned (`users[2] == null`), calling `users[2].printName()` immediately crashes with a `NullPointerException`. Always verify non-null elements before invoking methods.

---

## Key Takeaways
- Array initialization in Java only allocates the reference container.
- Individual objects must be constructed before accessing their members.
- Enhanced for loops provide clean syntax for traversing object collections.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 08 - arrays]] - Array syntax fundamentals
- [[LAB 30 - student app]] - Managing struct records in C
- [[OOP BRO 18 - array list]] - Dynamic resizable object collections
