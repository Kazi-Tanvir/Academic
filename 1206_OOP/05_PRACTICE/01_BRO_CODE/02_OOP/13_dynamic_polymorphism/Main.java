import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;
        choice = scanner.nextInt();
        Animal animal;

        switch (choice) {
            case 1: 
                animal = new Dog();
                animal.speak();
                break;
            case 2: 
                animal = new Cat();
                animal.speak();
                break;
            default:
                break;
        }
    }
}
