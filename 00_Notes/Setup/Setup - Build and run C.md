---
title: "Setup - Build and run C"
tags:
  - lang/c
  - type/reference
---
# Setup - Build and run C

> [!abstract] Overview
> This guide details the environment setup, compiler toolchains, task configurations, build scripts, and automated grading harnesses for C coursework across CSE 1101 and CSE 1215.

---

## 1. Toolchain & Compiler
The primary compiler used in this repository is MinGW-w64 GCC (targeting UCRT / Win64) accessible via Git Bash or PowerShell on Windows.

To verify compiler availability and version:
```bash
gcc --version
```

### Compiling a Single C File
For everyday drills, exercises, and lecture demonstrations, compile directly from the command line:
```bash
gcc -Wall -Wextra -std=c11 <filename>.c -o <filename>.exe
./<filename>.exe
```
Key compiler flags:
- `-Wall -Wextra`: Enables comprehensive compiler warnings for uninitialized variables, format mismatches, and unused arguments.
- `-std=c11`: Targets the ISO C11 language standard.
- `-o <name>`: Names the resulting compiled executable.

---

## 2. VS Code Task Configuration
The root `.vscode/tasks.json` defines project build tasks. Currently, it integrates with the CMake build framework:

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "cmake",
            "label": "CMake: build",
            "command": "build",
            "targets": [
                "[N/A - Select Kit]"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": [],
            "detail": "CMake template build task"
        }
    ]
}
```

---

## 3. Modular Multi-File Project: Image Editor (`build.bat`)
For complex, multi-file applications with third-party libraries (such as `1101_CSE/04_LAB_PROJECT/05_FINAL_PROJECT`), compilation is automated via a Windows Batch script `build.bat`:

```batch
@echo off
setlocal

echo ====================================================
echo   Building Image Manipulation Software (Win64)
echo ====================================================
taskkill /F /IM ImageEditor.exe >nul 2>nul

gcc src\main.c src\programs\gui.c src\programs\image.c src\programs\filter.c src\programs\ucrt_compat.c ^
    -o ImageEditor.exe ^
    -I./src/header -I./include -L./lib ^
    -liup -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 -luxtheme ^
    -Wall -Wextra
```

Key build mechanisms:
1. **Process Termination**: `taskkill /F /IM ImageEditor.exe` frees file locks on running instances before relinking.
2. **Include Headers**: `-I./src/header -I./include` adds local headers and IUP toolkit headers to the preprocessor search path.
3. **Library Linking**: `-L./lib -liup` links the Tecgraf IUP GUI library, along with required Windows subsystem libraries (`-lgdi32`, `-lcomdlg32`, `-lole32`, etc.).

---

## 4. Automated Exam Grader: `grader.sh`
In `1101_CSE/04_LAB_PROJECT/04_MIDTERM_EXAM`, grading is managed by a bash script `grader.sh`. It compiles student submissions and tests them against expected outputs:

```bash
# Compilation per question:
gcc -std=c11 -Wall -Wextra "$SRC" -o "$EXE"

# Execution with I/O redirection:
./"$EXE" < "$INPUT" > output.txt

# Output comparison:
diff -w -B output.txt "$EXPECTED"
```
The script redirects input test vectors from `tests/q<Q>/in*.txt`, captures program output into `output.txt`, and uses `diff -w -B` (ignoring whitespace and blank lines) to determine test pass/fail status and calculate final marks.

---

## 5. Working in Temporary Folders (Best Practice)
> [!tip] Safe Testing Habit
> Programs that perform file I/O (e.g., redirecting `stdin` via `freopen("input.txt", "r", stdin)` or writing files like `output.txt` or `data/student_output.bin`) should **always** be compiled and executed inside a temporary working directory outside the repository (such as `%TEMP%\academic_runs\`). This ensures that repository test datasets and sample databases are never accidentally overwritten or corrupted during development.

---

## Related
- [[Setup - Build and run Java]] - Java compiler and execution setup
- [[CSE 1101 - Index]] - C Programming Course Index
- [[DSA - Index]] - Data Structures & Algorithms Course Index
