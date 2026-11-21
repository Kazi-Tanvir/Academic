---
title: "PRAC GUI - build"
aliases:
  - GUI build script
  - tutorial build
tags:
  - course/1101-cse
  - lang/batch
  - type/practice
  - topic/cli-args
  - topic/testing
  - level/intermediate
course: "1101_CSE"
semester: "1.1"
source: "1101_CSE/05_PRACTICE/05_IMAGE_EDITOR/gui/build.bat"
up: "[[PRAC - Index]]"
related:
  - "[[PROJ Image Editor - build]]"
created: 2026-10-29
status: draft
---
# PRAC GUI - build

> [!abstract] Summary
> Windows Batch script automating compilation and linking of tutorial GUI examples with IUP and native Win32 libraries.

**Source:** `05_PRACTICE/05_IMAGE_EDITOR/gui/build.bat`

## Problem
Automate the compilation of GUI tutorial programs, linking `-liup`, `-lgdi32`, and associated Windows libraries.

## Concepts used
- **Batch Linking Script:** GCC command-line configuration with include and library flags.

## Code
```bat
@echo off
setlocal

echo ====================================================
echo   Building Image Manipulation Software (Win64)
echo ====================================================
taskkill /F /IM ImageEditor.exe >nul 2>nul

gcc main.c ucrt_compat.c ^
    -o ImageEditor.exe ^
    -I./include -L./lib ^
    -liup -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 -luxtheme ^
    -Wall -Wextra

if %ERRORLEVEL% EQU 0 (
    echo.
    echo [SUCCESS] ImageEditor.exe built successfully!
    echo Launching ImageEditor.exe...
    .\ImageEditor.exe
) else (
    echo.
    echo [ERROR] Build failed! Please review compiler errors above.
)

pause
```

## How it works
Invokes GCC with required search paths and libraries, terminating with interactive `pause`.

## My notes
> [!question]- My notes

## Related
- [[PROJ Image Editor - build]]
