---
title: "OOP BRO 20 - write files"
aliases:
  - Java File Writing
  - FileWriter and Text Output
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/exceptions
  - topic/file-io
  - level/intermediate
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/20_write_files"
files:
  - Main.java
  - output.txt
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 19 - exception]]"
next: "[[OOP BRO 21 - read files]]"
related:
  - "[[OOP BRO 21 - read files]]"
  - "[[CLASS 21 - file basic]]"
  - "[[OOP BRO 19 - exception]]"
created: 2026-11-21
status: draft
---
# OOP BRO 20 - write files

> [!abstract] Summary
> Explores persistent text output in Java using `java.io.FileWriter`: writing character streams to external disk files, handling checked `IOException` scenarios, and understanding file overwrite vs append modes.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/20_write_files`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Main.java` | File Writing Stream | Creates `FileWriter("output.txt")`, writes multi-line string content, catches `IOException`. |
| `output.txt` | Target Text File | Generated output file containing written text data. |

---

## The concept in plain words
Files allow data to persist permanently on disk after the Java virtual machine terminates. `FileWriter` provides a character output stream for writing plain text.

---

## Code
### `Main.java`
```java
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        String filePath = "data\\output.txt";
        String textContent = """
        Roses are red, 
        Violets are blue.
        BOOTY BOOTY BOOTY 
        ROCKING' EVERYWHERE
        """;
        try (FileWriter writer = new FileWriter(filePath)) {
            writer.write(textContent);
            System.out.println("File has been written");
        } catch (FileNotFoundException e) {
            System.out.println("FileNotFound!!");
        } catch(IOException e){
            System.out.println("Io Exception");
        } catch(Exception e){
            System.out.println("Somthing went wrong !");
        }
    }    
}
```

### `output.txt`
```text
Roses are red,
Violets are blue.
BOOTY BOOTY BOOTY
ROCKING' EVERYWHERE
```

---

## How it works
- `try (FileWriter writer = new FileWriter(filePath))`: Initializes writer stream targeting `output.txt`.
- `writer.write(txt)`: Writes string characters to the file buffer.
- `writer.close()` flushes buffers and releases the OS file lock.
- If the file does not exist, Java automatically creates it. If it exists, it is overwritten by default.

---

## Sample Run
```text
File has been written
```

---

## Gotchas
> [!warning] Append Mode vs Overwrite
> Passing only the file path (`new FileWriter("output.txt")`) truncates existing content!
> To append to an existing file, pass the boolean flag `true`: `new FileWriter("output.txt", true)`.

---

## Key Takeaways
- Always close file writers to prevent corrupted or unwritten buffer caches.
- File operations throw checked `IOException` that must be caught or declared.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 21 - read files]] - Reading stored text files
- [[CLASS 21 - file basic]] - File I/O in C (`fopen`, `fprintf`, `fclose`)
- [[OOP BRO 19 - exception]] - Handling input/output exceptions
