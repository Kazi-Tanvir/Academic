---
title: "Setup - Build and run Java"
tags:
  - lang/java
  - type/reference
---
# Setup - Build and run Java

> [!abstract] Overview
> This guide explains the Java development environment, command-line compilation and execution mechanics, project layouts, and VS Code settings for SE 1206 Object-Oriented Programming.

---

## 1. Toolchain & Compiler
Java coursework utilizes the standard OpenJDK / Oracle JDK toolchain (`javac` compiler and `java` application launcher).

To verify the installation:
```bash
javac -version
java -version
```

---

## 2. Directory Layouts in 1206_OOP
The repository contains two distinct folder organizations for Java code:

### Layout A: Enterprise Standard (`src`/`bin` with `.vscode/settings.json`)
Found in `1206_OOP/05_PRACTICE/01_BRO_CODE/02_OOP/01_class_object` and `02_constructor`:
```text
01_class_object/
├── .vscode/
│   └── settings.json
├── src/
│   ├── Car.java
│   └── Main.java
├── bin/
│   ├── Car.class
│   └── Main.class
└── README.md
```
In these folders, `.vscode/settings.json` configures the Java Language Server:
```json
{
    "java.project.sourcePaths": ["src"],
    "java.project.outputPath": "bin",
    "java.project.referencedLibraries": [
        "lib/**/*.jar"
    ]
}
```
**Compilation & Running from Terminal:**
```bash
# Compile all sources from src into bin:
javac -d bin src/*.java

# Run the entrypoint class specifying the classpath:
java -cp bin Main
```

### Layout B: Flat Practice Folders
Found in `01_BASICS` and remaining `02_OOP` folders (e.g. `03_overload_constructor` through `24_date_time`):
All `.java` files sit directly in the folder alongside a local `bin/` directory.

**Compilation & Running:**
```bash
# Compile to a target output folder:
javac -d bin *.java

# Execute Main:
java -cp bin Main
```
For single standalone files (such as `01_BASICS/aaPrint.java`):
```bash
javac aaPrint.java
java aaPrint
```

---

## 3. VS Code Launch Configuration
The root `.vscode/launch.json` specifies the standard Java debug and run profile:
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "type": "java",
            "name": "Main",
            "request": "launch",
            "mainClass": "Main",
            "projectName": "05_ACADEMIC_a4cac263"
        }
    ]
}
```
This configuration allows one-click running and debugging (`F5`) inside VS Code whenever `Main.java` is active.

---

## 4. Handling Interactive Programs & File Writing
> [!warning] Clean Execution Rule
> Several practice exercises write files directly (e.g., `20_write_files` and `21_read_files` access `data/output.txt`). When testing, copy the exercise folder to a temporary working directory outside the repository so untracked runtime artifacts do not pollute the git working tree.

---

## Related
- [[Setup - Build and run C]] - C compiler and toolchain guide
- [[OOP - Index]] - Object-Oriented Programming Course Index
- [[OOP BRO - Index]] - Bro Code Java Practice Index
