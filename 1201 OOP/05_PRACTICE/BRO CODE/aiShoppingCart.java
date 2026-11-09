import java.util.Scanner;

public class aiShoppingCart {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String item;
        double price;
        int quantity;
        char currency = '$';
        double total;

        System.out.println("Enter the item name : ");
        item = scanner.nextLine();

        System.out.println("Enter the price of the item : ");
        price = scanner.nextDouble();

        System.out.println("Enter the quantity of the item : ");
        quantity = scanner.nextInt();
        total = price * quantity;

        System.out.println("Item: " + item);
        System.out.println("Price: " + currency + price);
        System.out.println("Quantity: " + quantity);
        System.out.println("Total: " + currency + total);

        scanner.close();

    }
}
