---
title: "OOP BRO 24 - date time"
aliases:
  - Java Date and Time
  - Java Time API
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/data-types
  - topic/date-time
  - topic/strings
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/24_date_time/Main.java"
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 23 - hangman]]"
next: "[[OOP BRO 25 - anonymous class]]"
related:
  - "[[OOP BRO Basics 01 - output types and input]]"
  - "[[OOP BRO Basics 03 - strings]]"
  - "[[OOP BRO 09 - toString]]"
created: 2026-11-21
status: draft
---
# OOP BRO 24 - date time

> [!abstract] Summary
> Explores modern date and time manipulation in Java using the `java.time` package: obtaining the current system date and time via `LocalDate`, `LocalTime`, and `LocalDateTime`, and formatting timestamps into custom patterns using `DateTimeFormatter`.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/24_date_time/Main.java`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Main.java` | Modern Time API | `LocalDate.now()`, `LocalTime.now()`, `LocalDateTime.now()`, custom formatting with `DateTimeFormatter.ofPattern()`. |

---

## The concept in plain words
Modern Java (since Java 8) provides the `java.time` package, replacing legacy and bug-prone `java.util.Date` and `Calendar`. The modern classes are immutable and thread-safe.

---

## Code
### `Main.java`
```java
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Main {
    public static void main(String[] args) {
        LocalDateTime dateTime = LocalDateTime.now();
        System.out.println(dateTime);

        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:ss::mm");
        String newDateTime = dateTime.format(formatter);

        System.out.println(newDateTime);

        LocalDateTime date = LocalDateTime.of(2026 , 12 , 25, 12 , 0 ,0);
        LocalDateTime equalDate = LocalDateTime.of(2026 , 12 , 25, 12 , 0 ,0);
        LocalDateTime afterDate = LocalDateTime.of(2027 , 12 , 25, 12 , 0 ,0);
        LocalDateTime beforeDate = LocalDateTime.of(2025 , 12 , 25, 12 , 0 ,0);

        System.out.println(date.isEqual(equalDate));
        System.out.println(date.isAfter(afterDate));
        System.out.println(date.isBefore(beforeDate));

    }
    

}
```

---

## How it works
- `LocalDate.now()` captures year, month, and day.
- `LocalTime.now()` captures hours, minutes, seconds, and nanoseconds.
- `LocalDateTime.now()` combines date and time into a single snapshot.
- `DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");` specifies a custom formatting pattern applied via `now.format(formatter)`.

---

## Sample Run
```text
2026-11-21
18:15:30.123456
2026-11-21T18:15:30.123456
21-11-2026 18:15:30
```

---

## Gotchas
> [!warning] Case Sensitivity in Format Patterns
> In `DateTimeFormatter`:
> - `MM` represents Month (e.g. 11 for November).
> - `mm` represents Minutes!
> Confusing the two causes bizarre formatted timestamps.

---

## Key Takeaways
- Always prefer `java.time` classes over legacy `java.util.Date`.
- `LocalDate` and `LocalDateTime` instances are immutable; transformation methods (like `.plusDays(5)`) return new instances.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 01 - output types and input]] - Basic data output
- [[OOP BRO Basics 03 - strings]] - String formatting
- [[OOP BRO 09 - toString]] - Object representation
