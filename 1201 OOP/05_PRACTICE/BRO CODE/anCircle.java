import java.util.Scanner;

public class anCircle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double radius = scanner.nextDouble();
        
        double circumference = 2 * Math.PI * radius;
        double area = Math.PI * Math.pow(radius, 2);
        double volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);

        System.out.println("Circumference: " + circumference);
        System.out.println("Area: " + area);
        System.out.println("Volume: " + volume);

        scanner.close();
    }
}
