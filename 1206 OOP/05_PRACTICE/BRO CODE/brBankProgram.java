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
