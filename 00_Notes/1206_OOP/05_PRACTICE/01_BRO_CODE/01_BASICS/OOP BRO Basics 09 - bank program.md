---
title: "OOP BRO Basics 09 - bank program"
aliases:
  - Java Basics 09
  - Bank Program
tags:
  - course/1206-se
  - lang/java
  - type/practice
  - topic/control-flow
  - topic/functions
  - topic/loops
  - topic/user-input
  - level/basic
course: "1206_SE"
semester: "1.2"
source: "1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS"
files:
  - brBankProgram.java
up: "[[OOP BRO - Index]]"
prev: "[[OOP BRO Basics 08 - arrays]]"
next: "[[OOP BRO Basics 10 - dice]]"
related:
  - "[[OOP BRO Basics 04 - conditionals]]"
  - "[[OOP BRO Basics 06 - loops]]"
  - "[[OOP BRO Basics 07 - methods overloading and scope]]"
created: 2026-11-21
status: draft
---
# OOP BRO Basics 09 - bank program

> [!abstract] Summary
> A complete interactive console banking application demonstrating procedural program decomposition into dedicated helper methods: `showBalance()`, `deposit()`, and `withdraw()`, managed via a sentinel-controlled loop with a `switch` menu dispatch.

**Source:** `1206_OOP/05_PRACTICE/01_BRO_CODE/01_BASICS`

| File | Primary Focus | Key Highlights |
| :--- | :--- | :--- |
| `brBankProgram.java` | Console Banking Application | Method decomposition, input validation (preventing negative deposits/overdrafts), formatted currency output. |

---

## Code (`brBankProgram.java`)
```java
import java.util.Scanner;

public class brBankProgram {
    static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        double balance = 100.10;
        boolean isRunning = true;
        int choice;
        while (isRunning) {
            System.out.println();
            System.out.println("Enter your choice : ");
            System.out.println();
            System.out.println("1. Show Balance");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("0. Exit");
            choice = scanner.nextInt();

            switch (choice) {
                case 1 -> showBalance(balance);
                case 2 -> balance = deposit(balance);
                case 3 -> balance = withdraw(balance);
                case 0 -> isRunning = false;
                default->
                    System.out.println("Enter a valid choice!");
            }
        }

    }
    static void showBalance(double balance){
        System.out.println("---------------------------");
        System.out.println("Your balance is $"+ balance);
        System.out.println("---------------------------");
    }
    static double deposit(double balance) {
        System.out.println("---------------------------");
        System.out.print("Enter deposit amount : ");
        double amount = scanner.nextDouble();
        
        if (amount <= 0) {
            System.out.println("Deposit amount must be greater than zero!");
            return balance;
        }
        
        System.out.printf("Deposited %.2f\n", amount);
        balance += amount;
        showBalance(balance);
        return balance;
    }

    static double withdraw(double balance) {
        System.out.println("---------------------------");
        System.out.print("Enter withdraw amount : ");
        double amount = scanner.nextDouble();
        
        if (amount <= 0) {
            System.out.println("Withdraw amount must be greater than zero!");
            return balance; 
        }
        if (amount > balance) {
            System.out.println("Insufficient balance!");
            return balance;
        }
        
        System.out.printf("Withdrew %.2f\n", amount);
        balance -= amount;
        showBalance(balance);
        return balance;
    }


}
```

---

## How it works
- **Menu Loop**: A `while (isRunning)` loop prompts the user with 4 menu choices:
  1. Show Balance
  2. Deposit
  3. Withdraw
  4. Exit
- **Method Decomposition**:
  - `showBalance(balance)`: Prints current funds formatted to two decimal places.
  - `deposit(balance)`: Validates that deposit amount $> 0$, then adds it to the balance.
  - `withdraw(balance)`: Checks if withdrawal amount exceeds current balance or is $\le 0$ before subtracting.
- **Sentinel Flag**: Selecting option `4` sets `isRunning = false` and prints a thank-you exit message.

---

## Sample Run
```text
***************
BANKING PROGRAM
***************
1. Show Balance
2. Deposit
3. Withdraw
4. Exit
***************
Enter your choice (1-4): 1
$0.00
***************
Enter your choice (1-4): 2
Enter amount to deposit: 500
$500.00 deposited.
***************
Enter your choice (1-4): 3
Enter amount to withdraw: 200
$200.00 withdrawn.
***************
Enter your choice (1-4): 4
Thank you for banking with us!
```

---

## Gotchas
> [!warning] State Mutation Across Method Calls
> In Java, primitive variables (like `double balance`) are passed **by value**. If a helper method modifies its local `balance` parameter, the caller's variable does not change unless the new balance is returned:
> `balance = deposit(balance);`

---

## Key Takeaways
- Decomposing large programs into specialized single-purpose methods dramatically improves readability and testability.
- Always validate inputs prior to updating financial state (e.g., overdraft protection).

---

## My notes
> [!question]- My notes

## Related
- [[OOP BRO Basics 04 - conditionals]] - Menu branching with switch
- [[OOP BRO Basics 06 - loops]] - Sentinel-controlled game/app loops
- [[OOP BRO Basics 07 - methods overloading and scope]] - Passing arguments and returning results
