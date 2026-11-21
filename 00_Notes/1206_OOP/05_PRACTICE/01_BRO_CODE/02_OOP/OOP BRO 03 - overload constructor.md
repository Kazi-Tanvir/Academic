---
title: "OOP BRO 03 - overload constructor"
aliases:
  - Java Constructor Overloading
  - OOP 03 - overload constructor
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/class-object
  - topic/constructors
  - topic/method-overloading
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/03_overload_constructor"
files:
  - Main.java
  - User.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 02 - constructor]]"
next: "[[OOP BRO 04 - array of objects]]"
related:
  - "[[OOP BRO 02 - constructor]]"
  - "[[OOP BRO Basics 07 - methods overloading and scope]]"
  - "[[OOP BRO 07 - super]]"
created: 2026-11-21
status: draft
---
# OOP BRO 03 - overload constructor

> [!abstract] Summary
> Explores constructor overloading: defining multiple constructors within the same class with different parameter lists, enabling flexible object instantiation depending on available initialization data.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/03_overload_constructor`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `User.java` | Overloaded Constructors | Four constructors providing 0-arg, 1-arg, 2-arg, and 3-arg initialization configurations. |
| `Main.java` | Multi-Variant Construction | Demonstrates creating user profiles with varying levels of optional metadata. |

---

## The concept in plain words
Constructor overloading allows a class to offer several ways to create an object. Depending on what arguments are supplied to `new`, Java automatically routes the invocation to the constructor whose parameter signature matches.

> [!info] Java vs C: Function Overloading
> C does not support function or constructor overloading: every function must have a distinct name (e.g. `create_user()`, `create_user_with_email()`). Java permits multiple constructors with the exact same name as long as their parameter lists differ in count or types.

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
        User user1 = new User();
        user1.displayInfo();

        User user2 = new User("kazi Tanvir",18);
        user2.displayInfo();

        User user3 = new User("kazi Tanvir",18,"email");
        user3.displayInfo();
        
    }
}
```

---

## How it works
- `User.java` provides four constructor overloads:
  1. `User()`: Default guest user (`username = "Guest"`).
  2. `User(String username)`: Sets username; email and age default to placeholder/zero values.
  3. `User(String username, String email)`: Sets username and email.
  4. `User(String username, String email, int age)`: Fully initialized user.
- The compiler performs static method dispatch based on argument types and arity.

---

## Sample Run
```text
Guest
guest@mail.com
0
tanvir
tanvir@gmail.com
0
hasan
hasan@outlook.com
21
```

---

## Gotchas
> [!warning] Parameter Ambiguity
> If two constructors differ only by parameter types that can be implicitly widened (like `int` vs `double`), passing an ambiguous literal might cause compiler ambiguity errors. Keep constructor parameter combinations distinct and intuitive.

---

## Key Takeaways
- Overloaded constructors allow optional fields while ensuring objects are always validly initialized.
- Constructors can delegate to each other using `this(...)` as the very first line of a constructor body.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 02 - constructor]] - Single parameterized constructors
- [[OOP BRO Basics 07 - methods overloading and scope]] - Method overloading principles
- [[OOP BRO 07 - super]] - Constructor chaining with inheritance
