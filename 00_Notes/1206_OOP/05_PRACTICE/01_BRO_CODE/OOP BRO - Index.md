---
title: "OOP BRO - Index"
aliases:
  - Bro Code Index
  - OOP Practice Index
tags:
  - course/1206-se
  - lang/java
  - type/index
course: "1206_SE"
semester: "1.2"
up: "[[OOP - Index]]"
created: 2026-11-21
status: draft
---
# Bro Code Java Curriculum & OOP Architecture Index

> [!abstract] Overview
> This index organizes the comprehensive Bro Code Java coursework, spanning 13 foundational drills in `01_BASICS` and 24 advanced object-oriented design and systems topics in `02_OOP`.

---

## 🧱 1. Fundamentals & Algorithms (`01_BASICS`)

| # | Note | What it teaches | Core tags |
| :-: | :--- | :--- | :--- |
| 01 | [[OOP BRO Basics 01 - output types and input]] | Console printing, primitive variables, Scanner input parsing, newline consumption bug, printf formatting. | `topic/data-types`, `topic/user-input` |
| 02 | [[OOP BRO Basics 02 - arithmetic math and mini programs]] | Arithmetic operators, precedence, Math utility methods, Random generator, compound interest, shopping cart, weight converter. | `topic/data-types`, `topic/math`, `topic/operators` |
| 03 | [[OOP BRO Basics 03 - strings]] | String immutability, character search, trimming, case manipulation, and substring slicing. | `topic/control-flow`, `topic/data-types`, `topic/strings` |
| 04 | [[OOP BRO Basics 04 - conditionals]] | Branching logic via if/else, nested conditionals, inline ternary operators, and switch statements. | `topic/control-flow`, `topic/operators` |
| 05 | [[OOP BRO Basics 05 - logical operators]] | Boolean logic using AND (`&&`), OR (`\|\|`), and NOT (`!`) operators with short-circuit evaluation. | `topic/control-flow`, `topic/operators` |
| 06 | [[OOP BRO Basics 06 - loops]] | While loops, do-while loops, for iteration, break/continue statements, and nested 2D loops. | `topic/control-flow`, `topic/game-logic`, `topic/loops` |
| 07 | [[OOP BRO Basics 07 - methods overloading and scope]] | Method signatures, call frames, parameter overloading, local vs global scope, and variable arguments (`varargs`). | `topic/functions`, `topic/method-overloading`, `topic/varargs` |
| 08 | [[OOP BRO Basics 08 - arrays]] | Array instantiation, keyboard element population, linear search, and 2D matrix navigation. | `topic/arrays`, `topic/searching`, `topic/user-input` |
| 09 | [[OOP BRO Basics 09 - bank program]] | Interactive procedural banking console with balance inquiry, deposit, withdrawal validation, and loop control. | `topic/control-flow`, `topic/functions`, `topic/loops`, `topic/user-input` |
| 10 | [[OOP BRO Basics 10 - dice]] | Random number generation, dice-rolling game logic, and text-based ASCII graphics rendering. | `topic/game-logic`, `topic/math`, `topic/user-input` |
| 11 | [[OOP BRO Basics 11 - quiz game]] | Parallel 2D question/option arrays, interactive user input scoring, and percentage calculation. | `topic/arrays`, `topic/game-logic`, `topic/loops`, `topic/user-input` |
| 12 | [[OOP BRO Basics 12 - rock paper scissors]] | Game state evaluation, opponent move randomization, round loops, and score tracking. | `topic/control-flow`, `topic/game-logic`, `topic/loops`, `topic/user-input` |
| 13 | [[OOP BRO Basics 13 - slot machine]] | Casino slot machine simulator with payout multiplier tables, spinning symbol randomization, and balance management. | `topic/arrays`, `topic/game-logic`, `topic/loops`, `topic/user-input` |

---

## 🏛️ 2. Object-Oriented Architecture & Systems (`02_OOP`)

| # | Note | What it teaches | Core tags |
| :-: | :--- | :--- | :--- |
| 01 | [[OOP BRO 01 - class object]] | Blueprint declaration, heap instantiation (`new`), instance fields, and instance methods. | `topic/class-object`, `topic/data-types`, `topic/functions` |
| 02 | [[OOP BRO 02 - constructor]] | Explicit object state initialization, the `this` reference keyword, and constructor call mechanics. | `topic/class-object`, `topic/constructors` |
| 03 | [[OOP BRO 03 - overload constructor]] | Multiple constructors with varying signatures for flexible object instantiation defaults. | `topic/class-object`, `topic/constructors`, `topic/method-overloading` |
| 04 | [[OOP BRO 04 - array of objects]] | Allocating reference arrays, storing heap object pointers, and iterating with enhanced for loops. | `topic/arrays`, `topic/class-object`, `topic/loops` |
| 05 | [[OOP BRO 05 - static]] | Class-level variables and static methods shared across all instances without requiring instantiation. | `topic/class-object`, `topic/static` |
| 06 | [[OOP BRO 06 - inheritance]] | Establishing `is-a` hierarchies with `extends`, inheriting superclass fields, and class tree specialization. | `topic/class-object`, `topic/inheritance` |
| 07 | [[OOP BRO 07 - super]] | Calling superclass constructors with `super(...)` and delegating initialization up the inheritance chain. | `topic/class-object`, `topic/constructors`, `topic/inheritance` |
| 08 | [[OOP BRO 08 - method overriding]] | Replacing superclass behavior in child classes using the `@Override` annotation. | `topic/class-object`, `topic/inheritance`, `topic/method-overriding` |
| 09 | [[OOP BRO 09 - toString]] | Overriding `Object.toString()` for clean, human-readable textual representation of object state. | `topic/class-object`, `topic/tostring` |
| 10 | [[OOP BRO 10 - abstract]] | Abstract classes and abstract methods acting as uninstantiable structural contracts. | `topic/abstract-classes`, `topic/class-object`, `topic/inheritance` |
| 11 | [[OOP BRO 11 - interfaces]] | Pure contractual interfaces, multiple interface implementation, and decoupling predator/prey roles. | `topic/interfaces`, `topic/polymorphism` |
| 12 | [[OOP BRO 12 - polymorphism]] | Treating distinct subclasses uniformly through shared superclass reference arrays. | `topic/inheritance`, `topic/polymorphism` |
| 13 | [[OOP BRO 13 - dynamic polymorphism]] | Late-binding runtime object resolution where user input dictates subclass instantiation and method dispatch. | `topic/method-overriding`, `topic/polymorphism`, `topic/user-input` |
| 14 | [[OOP BRO 14 - getter n setter]] | Encapsulation, restricting direct field access via `private` modifiers, and validating through accessors. | `topic/class-object`, `topic/encapsulation` |
| 15 | [[OOP BRO 15 - aggregation]] | Modeling loose "has-a" relationships where constituent objects exist independently (Library and Books). | `topic/aggregation`, `topic/arrays`, `topic/class-object` |
| 16 | [[OOP BRO 16 - composition]] | Modeling strong "part-of" ownership where sub-objects are bound to parent lifecycle (Car and Engine). | `topic/class-object`, `topic/composition` |
| 17 | [[OOP BRO 17 - wrapper class]] | Primitive boxing, autoboxing, unboxing, and static utility conversion methods of wrapper types. | `topic/data-types`, `topic/wrapper-classes` |
| 18 | [[OOP BRO 18 - array list]] | Dynamically resizable collections with `ArrayList`, element indexing, iteration, and sorting. | `topic/arrays`, `topic/collections`, `topic/user-input` |
| 19 | [[OOP BRO 19 - exception]] | Defensive programming with `try-catch-finally`, catching arithmetic and input mismatch exceptions. | `topic/control-flow`, `topic/exceptions`, `topic/user-input` |
| 20 | [[OOP BRO 20 - write files]] | Writing text output to disk using `FileWriter` and automated resource cleanup via `try-with-resources`. | `topic/exceptions`, `topic/file-io` |
| 21 | [[OOP BRO 21 - read files]] | Reading persistent disk records line-by-line using `FileReader` and `BufferedReader`. | `topic/exceptions`, `topic/file-io`, `topic/loops` |
| 22 | [[OOP BRO 22 - audio file]] | Java Sound API concepts for opening, playing, looping, and controlling `.wav` audio playback. | `topic/audio`, `topic/file-io` |
| 23 | [[OOP BRO 23 - hangman]] | Architecture of word-guessing games in Java, character masking, attempt counters, and ASCII art. | `topic/game-logic`, `topic/strings` |
| 24 | [[OOP BRO 24 - date time]] | Modern temporal modeling using `LocalDateTime`, custom `DateTimeFormatter` parsing, and chronological comparison. | `topic/data-types`, `topic/date-time`, `topic/strings` |
| 25 | [[OOP BRO 25 - anonymous class]] | Anonymous inner classes for inline method overriding and one-off subclass instantiation without named class files. | `topic/class-object`, `topic/inheritance`, `topic/method-overriding` |
| 26 | [[OOP BRO 26 - timer tasks]] | Scheduling periodic background jobs with `Timer` and anonymous `TimerTask`, state tracking, and thread cancellation. | `topic/class-object`, `topic/control-flow`, `topic/method-overriding` |
| 27 | [[OOP BRO 27 - countdown timer]] | Interactive countdown timer combining `Scanner` user input with recurring `TimerTask` scheduling and task termination. | `topic/class-object`, `topic/control-flow`, `topic/user-input` |

---

## 🧭 The Learning Architecture

The 40 notes in this directory follow an intentional pedagogical progression:
1. **Language Primitives (`Basics 01–08`)**: The developer masters Java syntax, I/O streams, operators, conditionals, iteration, modular functions, and array memory.
2. **First-Principles OOP (`OOP 01–05`)**: Structuring applications around state and behavior (classes, objects, heap allocation, constructors, and class-level `static` members).
3. **The Inheritance Chain (`OOP 06–09`)**: Code reuse via `extends`, constructor chaining via `super()`, specialized overriding, and readable string representations via `toString()`.
4. **Polymorphic Abstraction (`OOP 10–13`)**: Eliminating brittle conditional branching via `abstract` classes, interfaces, static polymorphism, and late-binding dynamic polymorphism.
5. **Structural Relationships (`OOP 14–16`)**: Data hiding with getters/setters, loose aggregation, and tightly coupled composition.
6. **Enterprise Infrastructure (`OOP 17–27`)**: Object wrappers, dynamic memory lists, structured exception recovery, disk stream persistence, audio, date-time manipulation, anonymous classes, and timer tasks.
7. **Consolidation Projects (`Basics 09–13`, `OOP 23`)**: Synthesizing the entire stack into complete interactive console games and banking systems.

---

## Related
- [[OOP - Index]] — Course Index
- [[Setup - Build and run Java]] — Java Toolchain Guide
- [[CSE 1101 - Index]] — C Programming Prerequisite
- [[CLASS 26 - struct student info]] — C Struct Comparison
