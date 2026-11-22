---
title: "OOP BRO 25 - anonymous class"
aliases:
  - Anonymous Inner Class
  - Java Anonymous Class
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/class-object
  - topic/inheritance
  - topic/method-overriding
  - level/intermediate
course: "1206_SE"
semester: "1.2"
date: 2026-11-22
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/25_anonymous_class"
files:
  - Dog.java
  - Main.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 24 - date time]]"
next: "[[OOP BRO 26 - timer tasks]]"
related:
  - "[[OOP BRO 06 - inheritance]]"
  - "[[OOP BRO 08 - method overriding]]"
  - "[[OOP BRO 10 - abstract]]"
  - "[[OOP BRO 26 - timer tasks]]"
created: 2026-11-23
status: draft
---
# OOP BRO 25 - anonymous class

> [!abstract] Summary: Demonstrates anonymous inner classes in Java by instantiating an unnamed, one-time subclass of `Dog` that overrides the `speak()` method inline without creating a dedicated `.java` file.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/25_anonymous_class`

## Problem
A program requires customized or specialized behavior (overriding a superclass method) for a single specific object instance without polluting the project namespace with a dedicated child class file.

## Concepts used
- **Anonymous Inner Class**: An unnamed local class defined and instantiated simultaneously in an expression using the `new` operator.
- **Inheritance (`extends`)**: Reusing attributes and behaviors from a base class. The anonymous construct implicitly subclasses `Dog`.
- **Method Overriding (`@Override`)**: Supplying a specialized implementation for an inherited method to alter runtime behavior.
- **Dynamic Method Dispatch**: Resolving method calls at runtime based on the actual object type allocated on the heap rather than the static reference type.

## Code
### `Dog.java`
```java

public class Dog {
    void speak(){
        System.out.println("WOOF!");
    }
}
```

### `Main.java`
```java

public class Main {
    public static void main(String[] args) {
        Dog dog1 = new Dog(){
            @Override 
            void speak(){
                System.out.println("Ruh Roh");
            }
        };
        Dog dog2 = new Dog();
        dog1.speak();
        dog2.speak();
    }
}
```

## How it works
1. `Dog.java` declares a base `Dog` class with a package-private `speak()` method that prints `"WOOF!"`.
2. Inside `Main.main()`, the statement `Dog dog1 = new Dog(){ ... };` instantiates an anonymous subclass extending `Dog`.
3. The compiler generates a synthetic class file (named `Main$1.class`), embedding the overridden `speak()` method that prints `"Ruh Roh"`.
4. An instance of this synthetic class is allocated on the heap and referenced by the superclass variable `dog1`.
5. Next, `Dog dog2 = new Dog();` allocates a standard instance of `Dog` on the heap.
6. Invoking `dog1.speak()` triggers late-binding dynamic dispatch, executing the overridden method to output `"Ruh Roh"`.
7. Invoking `dog2.speak()` executes standard superclass code to output `"WOOF!"`.

## Diagram / trace
```mermaid
classDiagram
    class Dog {
        +speak() void
    }
    class Main$1 {
        +speak() void
    }
    Dog <|-- Main$1 : anonymous subclass
```

```text
Stack Frame (main)            Managed Heap
[ dog1 (ref) ] ------------> [ Main$1 instance ] -> speak() => "Ruh Roh"
[ dog2 (ref) ] ------------> [ Dog instance ]    -> speak() => "WOOF!"
```

## Sample run
```text
Ruh Roh
WOOF!
```

## Gotchas
> [!warning] Inability to Define Custom Constructors
> Anonymous inner classes have no identifier name, making it impossible to write an explicit constructor. Any instance-level initialization must be handled through field initializers or instance initialization blocks (`{ ... }`).

> [!warning] Single-Use Overhead
> If the same specialized behavior is required across multiple places in an application, using an anonymous class leads to duplicate bytecode classes. Define a proper named subclass instead.

## Possible improvements
- If overriding a functional interface (an interface with a single abstract method), modern Java lambda expressions provide a significantly cleaner syntax than anonymous inner classes.

## Key takeaways
- Anonymous inner classes combine class declaration and object instantiation into a concise inline expression.
- The Java compiler produces a numbered bytecode file (e.g., `Main$1.class`) for each anonymous class defined.
- Polymorphic dynamic dispatch ensures that method calls through superclass reference types invoke the customized subclass implementation.

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 06 - inheritance]]
- [[OOP BRO 08 - method overriding]]
- [[OOP BRO 10 - abstract]]
- [[OOP BRO 26 - timer tasks]]
