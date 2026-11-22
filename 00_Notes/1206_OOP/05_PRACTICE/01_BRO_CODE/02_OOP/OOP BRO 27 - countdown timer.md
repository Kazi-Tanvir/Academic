---
title: "OOP BRO 27 - countdown timer"
aliases:
  - Java Countdown Timer
  - Console Countdown Timer
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/class-object
  - topic/control-flow
  - topic/user-input
  - level/intermediate
course: "1206_SE"
semester: "1.2"
date: 2026-11-22
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/27_countdown_timer/Main.java"
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 26 - timer tasks]]"
related:
  - "[[OOP BRO 26 - timer tasks]]"
  - "[[OOP BRO 25 - anonymous class]]"
  - "[[OOP BRO Basics 01 - output types and input]]"
created: 2026-11-23
status: draft
---
# OOP BRO 27 - countdown timer

> [!abstract] Summary
> Builds an interactive console countdown timer combining `java.util.Scanner` with `Timer` and an anonymous `TimerTask`, capturing a user-specified duration and decrementing once per second until reaching completion.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/27_countdown_timer/Main.java`

## Problem
Prompt the user for a countdown duration from the console and run a background task that ticks once per second, decrementing the counter until zero is reached and cleanly terminating.

## Concepts used
- **`Scanner`**: Captures interactive terminal input (`scanner.nextInt()`) to initialize dynamic timer state.
- **Dynamic Field Initialization in Anonymous Classes**: Initializing `int count = scanner.nextInt();` directly within the anonymous `TimerTask` body during object instantiation.
- **`Timer` & `TimerTask`**: Coordinates timed execution intervals on a dedicated background thread.
- **Thread Lifecycle Control**: Using `timer.cancel()` to release background resources once the terminal condition is reached.

## Code
```java
import java.util.Scanner;
import java.util.Timer;
import java.util.TimerTask;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Timer timer = new Timer();
        TimerTask timerTask = new TimerTask() {

            int count  = scanner.nextInt();

            @Override 
            public void run(){
                System.out.println("Hello!");
                count--;
                if (count <= 0) {
                    System.out.println("TASK COMPLETE!");
                    timer.cancel();
                }
            }
        };
        timer.schedule(timerTask, 0,1000);
    }
    
}
```

## How it works
1. `Scanner scanner = new Scanner(System.in);` and `Timer timer = new Timer();` allocate input and background scheduler utilities.
2. The anonymous `TimerTask` instantiation begins: its field initializer `int count = scanner.nextInt();` halts execution to read an integer from standard input.
3. Once the user submits an integer (e.g. `3`), `timerTask` finishes instantiating.
4. `timer.schedule(timerTask, 0, 1000);` starts the repeating schedule: initial delay `0` ms, repeat every `1000` ms.
5. In each iteration, `run()` prints `"Hello!"`, decrements `count`, and evaluates `count <= 0`.
6. When `count` hits zero, `"TASK COMPLETE!"` is printed and `timer.cancel()` disposes of the scheduler thread, allowing clean application exit.

## Sample run
Input:
```text
3
```
Output:
```text
Hello!
Hello!
Hello!
TASK COMPLETE!
```

## Gotchas
> [!warning] Blocking User Input During Instantiation
> Notice that `int count = scanner.nextInt();` is placed inside the class body, not inside `main()` prior to instantiation. Because field initializers run when `new TimerTask()` is evaluated, the program blocks waiting for user input without displaying a prompt unless `System.out.print(...)` precedes it.

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 26 - timer tasks]] - Fixed-duration TimerTask baseline
- [[OOP BRO 25 - anonymous class]] - Anonymous inner class syntax
- [[OOP BRO Basics 01 - output types and input]] - Scanner console input handling
