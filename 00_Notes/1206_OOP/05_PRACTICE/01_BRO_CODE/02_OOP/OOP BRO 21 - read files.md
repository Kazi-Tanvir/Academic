---
title: "OOP BRO 21 - read files"
aliases:
  - Java File Reading
  - BufferedReader and FileReader
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/exceptions
  - topic/file-io
  - topic/loops
  - level/intermediate
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/21_read_files"
files:
  - Main.java
  - output.txt
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 20 - write files]]"
next: "[[OOP BRO 22 - audio file]]"
related:
  - "[[OOP BRO 20 - write files]]"
  - "[[CLASS 21 - file basic]]"
  - "[[OOP BRO 19 - exception]]"
created: 2026-11-21
status: draft
---
# OOP BRO 21 - read files

> [!abstract] Summary
> Explores file input streams in Java using `java.io.BufferedReader` wrapping `java.io.FileReader`: reading external text files line-by-line in a loop until reaching end-of-file (`null`), and handling `FileNotFoundException`.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/21_read_files`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Main.java` | Buffered File Reader | Uses `BufferedReader.readLine()` inside a `while ((line = reader.readLine()) != null)` loop. |
| `output.txt` | Target Text File | Text file read by the program. |

---

## The concept in plain words
`FileReader` reads raw character streams from disk one-by-one. Wrapping it in a `BufferedReader` buffers character blocks in memory, dramatically increasing read performance and providing the convenient `readLine()` method.

---

## Code
### `Main.java`
```java
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.FileNotFoundException;

public class Main {
    public static void main(String[] args) {
        String filePath = "data\\output.txt";
        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (FileNotFoundException e) {
            System.out.println("File not found");
        } catch(IOException e){
            System.out.println("Unable to open file");
        } catch(Exception e){
            System.out.println("Somthing went wrong");
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
- `BufferedReader reader = new BufferedReader(new FileReader(filePath));` opens the stream.
- `while ((line = reader.readLine()) != null)` reads each line sequentially until the end of the file is reached.
- Each line is printed to the terminal with `System.out.println(line)`.

---

## Sample Run
```text
I like pizza
It's really good
buy me a pizza
```

---

## Gotchas
> [!warning] Missing File Exception
> If the file does not exist at the designated path, `FileReader` throws a checked `FileNotFoundException`. Always wrap file instantiation in a `try-catch` block.

---

## Key Takeaways
- `BufferedReader` is significantly faster than unbuffered character reads.
- Always check for `null` to detect EOF when using `readLine()`.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 20 - write files]] - Writing files to disk
- [[CLASS 21 - file basic]] - File reading in C (`fgets`, `fscanf`)
- [[OOP BRO 19 - exception]] - Checked exception handling
