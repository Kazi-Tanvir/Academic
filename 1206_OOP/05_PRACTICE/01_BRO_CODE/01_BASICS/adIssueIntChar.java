import java.util.Scanner;

public class adIssueIntChar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter your age : ");
        int age = scanner.nextInt();

        scanner.nextLine(); // this shit is needed becuase there will be \n [ new line char] after the int input so we need to clear that fucking buffer problem is similar to using [^\n] in scanf in c

        System.out.println("Enter your name : ");
        String name = scanner.nextLine();

        System.out.println("Your name is " + name + " your age is " + age);

        scanner.close();


    }
}
