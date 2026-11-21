---
title: "OOP BRO 01 - class object"
aliases:
  - Java Classes and Objects
  - OOP 01 - class object
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/class-object
  - topic/data-types
  - topic/functions
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/01_class_object"
files:
  - Car.java
  - Main.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 13 - slot machine]]"
next: "[[OOP BRO 02 - constructor]]"
related:
  - "[[CLASS 26 - struct student info]]"
  - "[[OOP BRO 02 - constructor]]"
  - "[[OOP BRO 04 - array of objects]]"
created: 2026-11-21
status: draft
---
# OOP BRO 01 - class object

> [!abstract] Summary
> Introduces the foundational pillars of Object-Oriented Programming (OOP) in Java: defining custom reference types through classes, instantiating objects with `new`, assigning instance variables (attributes), and invoking instance methods (behaviors).

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/01_class_object`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Car.java` | Class Blueprint | Declares fields (`make`, `model`, `year`, `price`, `isRunning`) and methods (`start()`, `stop()`, `drive()`, `brake()`). |
| `Main.java` | Object Instantiation | Instantiates two distinct `Car` objects, modifies fields, and calls instance methods. |

---

## The concept in plain words
A **class** is a blueprint or template defining the structure and capabilities of an entity. An **object** is a concrete instance of that class living in memory with its own state.

> [!info] Java vs C: Structs vs Classes
> In C, a `struct` groups data members only (fields), and functions must be declared separately and passed a pointer to the struct (`void drive(struct Car* c)`). In Java, a class encapsulates **both** state (attributes/fields) and behavior (methods) in a single unified blueprint, invoked directly on the instance (`car.drive()`).

---

## Memory picture
When executing `Car car1 = new Car();`:
```text
STACK                          HEAP
+-------------------+          +---------------------------+
| car1 (ref: 0x100) | -------> | Car Object (at 0x100)     |
+-------------------+          | - make: "Ford"            |
| car2 (ref: 0x200) | ---\     | - model: "Mustang"        |
+-------------------+     \    | - year: 2024              |
                           \   | - price: 58000.0          |
                            \  | - isRunning: false        |
                             \ +---------------------------+
                                                             +---------------------------+
                               | Car Object (at 0x200)     |
                               | - make: "Chevrolet"       |
                               | - model: "Corvette"       |
                               | - year: 2025              |
                               | - price: 68000.0          |
                               | - isRunning: false        |
                               +---------------------------+
```
- The variable `car1` on the stack stores only a memory address (reference) pointing to the actual object allocated on the heap.

---

## Code
### `Car.java`
```java
public class Car {
    String make = "Ford";
    String model = "Mustang";
    int year = 1996;
    double price = 58000.00;
    boolean isRunning = false;

    void displayInfo() {
        System.out.println("Make: " + make);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
        System.out.println("Price: $" + price);
        System.out.println("Running: " + isRunning);
    }

    void start(){
        System.out.println("You have started the engine");
        isRunning = true;
    }

    void stop(){
        System.out.println("You have stopped the engine");
        isRunning = false;
    }
}
```

### `Main.java`
```java
public class Main {
    public static void main(String[] args) {
        Car car = new Car();
        
        car.start();
        car.displayInfo();
        car.stop();
        car.displayInfo();
    }
}
```

---

## How it works
- In `Car.java`, default field values are declared directly on instance variables (`boolean isRunning = false;`).
- In `Main.java`, `new Car()` allocates heap space for each instance.
- Dot notation (`car1.make = "Ford";`) assigns instance-specific attribute values.
- Calling `car1.start()` modifies `car1.isRunning` to `true` and prints console confirmation.

---

## Sample Run
```text
You start the engine
You drive the car
You stop the engine
You brake the car
```

---

## Gotchas
> [!warning] Null Reference Trap
> Declaring a variable without instantiation (`Car myCar;`) leaves it uninitialized or `null`. Attempting to access fields or methods before calling `new Car()` causes a `NullPointerException`.

---

## Key Takeaways
- Classes bundle data (attributes) and logic (methods) together.
- Each instance maintains its own independent set of attributes on the heap.
- The `.` operator accesses both fields and methods of an object reference.

---

## My notes
> [!question]- My notes

## Related
- [[CLASS 26 - struct student info]] - Structs in C vs classes in Java
- [[OOP BRO 02 - constructor]] - Automatic initialization of objects
- [[OOP BRO 04 - array of objects]] - Managing collections of class instances
