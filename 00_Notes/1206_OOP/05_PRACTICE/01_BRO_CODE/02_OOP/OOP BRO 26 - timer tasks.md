---
title: "OOP BRO 26 - timer tasks"
aliases:
  - Java Timer and TimerTask
  - Scheduled Background Tasks
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/class-object
  - topic/control-flow
  - topic/method-overriding
  - level/intermediate
course: "1206_SE"
semester: "1.2"
date: 2026-11-22
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/26_timer_tasks/Main.java"
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 25 - anonymous class]]"
next: "[[OOP BRO 27 - countdown timer]]"
related:
  - "[[OOP BRO 25 - anonymous class]]"
  - "[[OOP BRO 24 - date time]]"
  - "[[OOP BRO 27 - countdown timer]]"
created: 2026-11-23
status: draft
---
# OOP BRO 26 - timer tasks

> [!abstract] Summary
> Explores scheduling repeating background tasks in Java using `java.util.Timer` and `java.util.TimerTask`, implementing an anonymous `TimerTask` subclass to execute periodic logic and terminate the timer when a count threshold is reached.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/26_timer_tasks/Main.java`

## Problem
Schedule a recurring unit of work to execute once per second in the background, maintaining an execution count state and terminating safely after three iterations.

## Concepts used
- **`Timer`**: A background thread utility facility that coordinates task scheduling for future or periodic execution.
- **`TimerTask`**: An abstract class implementing `Runnable` representing a task executed by a `Timer`.
- **Anonymous Subclass**: Subclassing `TimerTask` inline to supply the concrete implementation of `run()` while encapsulating state (`int count = 3`).
- **`timer.cancel()`**: Terminates the timer facility, discarding all scheduled tasks and releasing the underlying worker thread.

## Code
```java
import java.util.Timer;
import java.util.TimerTask;

public class Main {
    public static void main(String[] args) {
        Timer timer = new Timer();
        TimerTask timerTask = new TimerTask() {
            int count = 3;

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
1. `Timer timer = new Timer();` starts a dedicated background thread for task scheduling.
2. `TimerTask timerTask = new TimerTask() { ... };` constructs an anonymous subclass of `TimerTask` with an internal state variable `int count = 3` and an `@Override public void run()` method.
3. `timer.schedule(timerTask, 0, 1000);` registers `timerTask` to trigger immediately (`0` ms delay) and repeat every `1000` ms (1 second).
4. Each second, the background timer thread invokes `run()`, printing `"Hello!"` and decrementing `count`.
5. On the third run, `count` reaches `0`, triggering `"TASK COMPLETE!"` and `timer.cancel()`, which halts the timer thread and permits the JVM to shut down.

## Sample run
```text
Hello!
Hello!
Hello!
TASK COMPLETE!
```

## Gotchas
> [!warning] Active Worker Thread Prevents Process Exit
> A `Timer` creates a non-daemon worker thread by default. Failing to invoke `timer.cancel()` leaves the thread running indefinitely, preventing the JVM from shutting down even after `main()` completes.

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 25 - anonymous class]] - Anonymous inner class syntax used for `TimerTask`
- [[OOP BRO 24 - date time]] - Temporal API in Java
- [[OOP BRO 27 - countdown timer]] - Interactive user-driven countdown scheduling
