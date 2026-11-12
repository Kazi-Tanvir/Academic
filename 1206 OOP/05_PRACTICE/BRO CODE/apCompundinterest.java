import java.util.Scanner;

public class apCompundinterest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double principal;
        double rate;
        int timesCompounded;
        int years;
        double amount;

        System.out.println("Enter the principal amount : ");
        principal = scanner.nextDouble();

        System.out.println("Enter the annual interest rate (in decimal) : ");
        rate = scanner.nextDouble()/100;

        System.out.println("Enter the number of times interest is compounded per year : ");
        timesCompounded = scanner.nextInt();

        System.out.println("Enter the number of years : ");
        years = scanner.nextInt();

        amount = principal * Math.pow((1 + (rate / timesCompounded)), (timesCompounded * years));
        System.out.println("The amount after " + years + " years is: " + amount);
        
        scanner.close();
    }
}
