---
title: "OOP BRO 14 - getter n setter"
aliases:
  - Java Getters and Setters
  - Encapsulation
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/class-object
  - topic/encapsulation
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/14_getter_n_setter"
files:
  - Car.java
  - Main.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 13 - dynamic polymorphism]]"
next: "[[OOP BRO 15 - aggregation]]"
related:
  - "[[OOP BRO 01 - class object]]"
  - "[[OOP BRO 09 - toString]]"
  - "[[OOP BRO 16 - composition]]"
created: 2026-11-21
status: draft
---
# OOP BRO 14 - getter n setter

> [!abstract] Summary
> Explores Encapsulation in Java: restricting direct attribute access using the `private` access modifier and providing controlled read/write access via public accessor (getter) and mutator (setter) methods with embedded validation rules.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/14_getter_n_setter`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Car.java` | Encapsulated Class | `private` fields (`model`, `color`, `price`), public getters (`getModel()`, etc.) and validating setters (`setModel()`, `setColor()`, `setPrice()`). |
| `Main.java` | Accessor/Mutator Testing | Tests reading initial fields, modifying them via setters, and verifying guard checks against invalid values. |

---

## The concept in plain words
**Encapsulation** is the bundling of data and the methods that operate on that data into a single unit, hiding the internal representation (information hiding). Marking fields `private` prevents external code from putting the object into an invalid state.

---

## Code
### `Car.java`
```java

public class Car {
    private String model;
    private String color;
    private int price;

    Car(String model, String color , int price){
        this.model = model;
        this.color = color;
        this.price = price;
    }

    String getModel(){
        return this.model;
    }
    String getColor(){
        return this.color;
    }
    String getPrice(){
        return "$" + this.price;
    }

    void setColor(String color){
        this.color = color;
    }
    void setPrice(int price){
        if(price < 0){
            System.out.println("Price cannot be negative");
        }
        else{
            this.price = price;
        }
    }
}
```

### `Main.java`
```java

public class Main {
    public static void main(String[] args) {
        Car car = new Car("Ford", "Red" , 1000);
        System.out.println(car.getModel() + " " + car.getColor() + " " + car.getPrice());
        
        car.setColor("Blue");
        car.setPrice(-5000);
        car.setPrice(5000);
        System.out.println(car.getModel() + " " + car.getColor() + " " + car.getPrice());
    }
}
```

---

## How it works
- In `Car.java`, attributes are declared `private String model; private int price;`. Outside classes cannot write `car.price = -500;`.
- Setters enforce domain validation rules (e.g. `if (price < 0) { System.out.println("Invalid price"); } else { this.price = price; }`).
- Getters return values safely, allowing read-only or computed properties.

---

## Sample Run
```text
Charger
Black
10000
Corvette
Red
25000
```

---

## Gotchas
> [!warning] Direct Field Mutation
> Bypassing setters by making fields `public` breaks encapsulation and makes state debugging unpredictable across large codebases. Always prefer private fields with explicit getters/setters.

---

## Key Takeaways
- Encapsulation guarantees object integrity and simplifies debugging.
- Getters provide read access; setters provide validated write access.
- Enables changing internal implementation details without breaking external client code.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 01 - class object]] - Class state and methods
- [[OOP BRO 09 - toString]] - Object inspection
- [[OOP BRO 16 - composition]] - Encapsulating sub-objects
