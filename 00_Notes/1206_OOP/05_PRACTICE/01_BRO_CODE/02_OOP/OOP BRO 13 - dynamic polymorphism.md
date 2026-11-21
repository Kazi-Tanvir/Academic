---
title: "OOP BRO 13 - dynamic polymorphism"
aliases:
  - Java Dynamic Polymorphism
  - Runtime Polymorphism
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/method-overriding
  - topic/polymorphism
  - topic/user-input
  - level/advanced
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/13_dynamic_polymorphism"
files:
  - Animal.java
  - Cat.java
  - Dog.java
  - Main.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 12 - polymorphism]]"
next: "[[OOP BRO 14 - getter n setter]]"
related:
  - "[[OOP BRO 12 - polymorphism]]"
  - "[[OOP BRO 08 - method overriding]]"
  - "[[OOP BRO 11 - interfaces]]"
created: 2026-11-21
status: draft
---
# OOP BRO 13 - dynamic polymorphism

> [!abstract] Summary
> Demonstrates dynamic (runtime) polymorphism in Java: declaring a generic parent reference (`Animal animal`) and instantiating either a `Dog` or `Cat` object conditionally at runtime based on interactive user input, followed by invoking the overridden `speak()` method.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/13_dynamic_polymorphism`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Animal.java` | Base Superclass | Declares generic `speak()` method. |
| `Dog.java` | Subclass | Overrides `speak()` to output bark sound (`woof`). |
| `Cat.java` | Subclass | Overrides `speak()` to output meow sound (`meow`). |
| `Main.java` | Runtime Decision Dispatch | Reads user input choice (`1` for Dog, `2` for Cat); binds instance to `Animal animal`. |

---

## The concept in plain words
**Dynamic Polymorphism** occurs when the exact type of the object being instantiated cannot be determined at compile time because it depends on runtime events (such as user keyboard input, database records, or network packets).

---

## Memory picture
```text
At compile time:
STACK: animal reference of type Animal (declared, unassigned)

At runtime (User selects 1):
STACK                          HEAP
+--------------------+         +-----------------------+
| animal (ref: 0x88) | ------> | Dog Object (at 0x88)  |
+--------------------+         | - speak(): "woof"     |
                               +-----------------------+

At runtime (User selects 2):
STACK                          HEAP
+--------------------+         +-----------------------+
| animal (ref: 0x99) | ------> | Cat Object (at 0x99)  |
+--------------------+         | - speak(): "meow"     |
                               +-----------------------+
```

---

## Code
### `Animal.java`
```java

public abstract class Animal {
    abstract void speak();
}
```

### `Dog.java`
```java

public class Dog extends Animal{
    public void speak(){
        System.out.println("Woof");
    }
}
```

### `Cat.java`
```java

public class Cat extends Animal{
        public void speak(){
        System.out.println("Meow");
    }
}
```

### `Main.java`
```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;
        choice = scanner.nextInt();
        Animal animal;

        switch (choice) {
            case 1: 
                animal = new Dog();
                animal.speak();
                break;
            case 2: 
                animal = new Cat();
                animal.speak();
                break;
            default:
                break;
        }
    }
}
```

---

## How it works
- `Animal animal;` declares a reference variable capable of pointing to any `Animal` or derived subclass.
- Prompt asks user: `What animal do you want? (1=dog, 2=cat)`.
- If user inputs `1`, `animal = new Dog();`.
- If user inputs `2`, `animal = new Cat();`.
- Executing `animal.speak()` dynamically dispatches to the overridden method of whatever concrete instance was created.

---

## Sample Run
```text
What animal do you want? (1=dog, 2=cat): 1
The animal goes: woof
```

---

## Gotchas
> [!warning] Invalid Selection Null Guard
> If the user enters an unexpected number (e.g. `3`), `animal` remains `null`. Calling `animal.speak()` without checking `if (animal != null)` triggers a `NullPointerException`.

---

## Key Takeaways
- Enables building truly responsive applications where behaviors adapt to live runtime data.
- The parent reference acts as a universal socket for any compatible child plugin.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 12 - polymorphism]] - Subtype polymorphism with collections
- [[OOP BRO 08 - method overriding]] - Implementing specialized behaviors
- [[OOP BRO 11 - interfaces]] - Polymorphic interfaces
