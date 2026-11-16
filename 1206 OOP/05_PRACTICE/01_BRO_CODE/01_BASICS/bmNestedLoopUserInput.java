import java.util.Scanner;

public class bmNestedLoopUserInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter row : ");
        int row = scanner.nextInt();

        System.out.println("Enter column : ");
        int column =  scanner.nextInt();
        scanner.nextLine();

        System.out.println("Enter Symbol : ");
        String symbol = scanner.nextLine();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(symbol);
            }
        System.out.println();
        }

        scanner.close();
    }
}
