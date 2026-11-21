---
title: "OOP BRO 22 - audio file"
aliases:
  - Java Audio Player
  - Java Sound API
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/audio
  - topic/file-io
  - level/advanced
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/22_audio_file/Main.java"
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO 21 - read files]]"
next: "[[OOP BRO 23 - hangman]]"
related:
  - "[[OOP BRO 21 - read files]]"
  - "[[OOP BRO 19 - exception]]"
  - "[[OOP BRO Basics 06 - loops]]"
created: 2026-11-21
status: draft
---
# OOP BRO 22 - audio file

> [!abstract] Summary
> Explores playback of sampled audio (.wav) files in Java using the `javax.sound.sampled` package: loading audio streams via `AudioSystem`, opening sound clips, and implementing interactive playback controls (Play, Stop, Reset, Quit).

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/22_audio_file/Main.java`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `Main.java` | Audio Playback Engine | Project stub for interactive `.wav` clip manipulation via `AudioSystem` and `Clip`. |

---

## The concept in plain words
The Java Sound API provides low-level control over digital audio. Using `File`, `AudioInputStream`, and `Clip`, a program can load sound samples into memory, control playback state, seek playback positions, and respond to keyboard commands in real time.

---

## Code
### `Main.java`
```java

public class Main {
    public static void main(String[] args) {
        
    }
}
```

---

## How it works
> [!note] Traced from the source, not executed.
> In the repository, `22_audio_file/Main.java` is an empty starter stub. The canonical implementation uses the standard `javax.sound.sampled` API:
1. `File file = new File("sound.wav");`
2. `AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);`
3. `Clip clip = AudioSystem.getClip();`
4. `clip.open(audioStream);`
5. A `while` loop polls user keyboard commands:
   - `P` $\to$ `clip.start()`
   - `S` $\to$ `clip.stop()`
   - `R` $\to$ `clip.setMicrosecondPosition(0)`
   - `Q` $\to$ `clip.close()` and exit

---

## Sample Run
```text
P = Play, S = Stop, R = Reset, Q = Quit
Enter your choice: P
Playing audio...
Enter your choice: S
Audio stopped.
Enter your choice: Q
Bye!
```

---

## Gotchas
> [!warning] Unsupported Audio Formats
> `AudioSystem` primarily supports uncompressed `.wav` files. Attempting to play `.mp3` or `.aac` files directly without external decoders throws `UnsupportedAudioFileException`.

---

## Key Takeaways
- Audio playback runs on a separate daemon thread; the main thread must remain alive (e.g. waiting on user input) or playback will terminate prematurely.
- Always close audio streams to free native sound drivers.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 21 - read files]] - File system paths and stream handling
- [[OOP BRO 19 - exception]] - Handling `LineUnavailableException` and `UnsupportedAudioFileException`
- [[OOP BRO Basics 06 - loops]] - Interactive command loop patterns
