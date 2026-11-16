import  java.util.Scanner;

public class acInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter your name : ");
        String name = scanner.nextLine();

        System.out.println("Enter your age : ");
        int age = scanner.nextInt();

        System.out.println("Hello "+ name + ", you are " + age + " years old");

        scanner.close();
    }
}
