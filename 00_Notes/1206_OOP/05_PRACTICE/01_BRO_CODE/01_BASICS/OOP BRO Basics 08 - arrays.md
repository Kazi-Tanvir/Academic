---
title: "OOP BRO Basics 08 - arrays"
aliases:
  - Java Basics 08
  - Arrays and 2D Arrays
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/arrays
  - topic/searching
  - topic/user-input
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - btArray.java
  - buArrayInput.java
  - bvArraySearch.java
  - bx2dArray.java
  - by2dArrTelephone.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 07 - methods overloading and scope]]"
next: "[[OOP BRO Basics 09 - bank program]]"
related:
  - "[[OOP BRO 04 - array of objects]]"
  - "[[OOP BRO 18 - array list]]"
  - "[[OOP BRO Basics 11 - quiz game]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 08 - arrays

> [!abstract] Summary
> Explores Java fixed-size 1D arrays, dynamic array population from user input, linear search algorithm implementation, and multi-dimensional (2D) matrix arrays, including simulated telephone keypad matrices.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `btArray.java` | 1D array basics | Array declaration, literal initialization, indexing, `.length`, for-each loop. |
| `buArrayInput.java` | Dynamic array allocation | Sizing array from user input and populating elements in a loop. |
| `bvArraySearch.java` | Linear search | Iterating through an array to match a target value with early break. |
| `bx2dArray.java` | 2D array representation | Matrix array syntax (`int[][]`), nested loop traversal and printing. |
| `by2dArrTelephone.java` | Keypad matrix | 2D character array mapping phone keypad digits ('1' through '#'). |

---

## 1. 1D Arrays & Linear Search (`btArray.java`, `bvArraySearch.java`)
### Code Excerpt (`btArray.java`)
```java
public class btArray {
    public static void main(String[] args) {
        String[] fruits = {"apple", "jackfruit", "mango", "banana", "lichi"};
        System.out.println("Array elements:");
        for (String fruit : fruits) {
            System.out.println(fruit);
        }
    }
}
```

### Linear Search (`bvArraySearch.java`)
```java
public class bvArraySearch {
    public static void main(String[] args) {
        int[] numbers = { 10, 20, 30, 40, 50 };

        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] == 30) {
                System.out.println("Found 30 at index: " + i);
                break;
            }
        }
    }
}
```

### How it works
- In Java, arrays are fixed-size reference objects allocated on the heap.
- Indexed with zero-based integers from `0` to `array.length - 1`.
- Enhanced `for (String fruit : fruits)` iterates through every element cleanly without index variables.

---

## 2. 2D Arrays & Matrix Traversal (`bx2dArray.java`, `by2dArrTelephone.java`)
### Code Excerpt (`bx2dArray.java`)
```java
public class bx2dArray {
    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
    
}
```

### Keypad Grid (`by2dArrTelephone.java`)
```java
public class by2dArrTelephone {
 
    public static void main(String[] args) {
        String[][] telephone = {
            {"1", "2", "3"},
            {"4", "5", "6"},
            {"7", "8", "9"},
            {"#", "0", "*"}
        };

        for (int i = 0; i < telephone.length; i++) {
            for (int j = 0; j < telephone[i].length; j++) {
                System.out.print(telephone[i][j] + " ");
            }
            System.out.println();
        }
    }
    


}
```

### How it works
- `char[][] telephone = ({'2', '3', '1'}, {'5', '4', '6'}, {'9', '7', '8'}, {'0', '#', '*'});`
- Traversed using nested loops: outer loop runs through rows (`matrix.length`), inner loop through columns (`matrix[row].length`).

---

## Sample Run (`by2dArrTelephone.java`)
```text
1 2 3 
4 5 6 
7 8 9 
* 0 # 
```

---

## Gotchas
> [!warning] Fixed Size & ArrayIndexOutOfBoundsException
> - Unlike Python lists or Java `ArrayList`, regular Java arrays cannot grow or shrink after initialization.
> - Accessing index `< 0` or `>= array.length` throws `ArrayIndexOutOfBoundsException`.

---

## Key Takeaways
- Arrays hold multiple values of a single uniform type in contiguous memory.
- `array.length` is a field property (not a method call like `string.length()`).
- 2D arrays in Java are technically "arrays of arrays", allowing jagged arrays where rows have differing lengths.

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO 04 - array of objects]] - Storing object references in arrays
- [[OOP BRO 18 - array list]] - Resizable dynamic array collection
- [[OOP BRO Basics 11 - quiz game]] - 2D arrays for question and answer choices
