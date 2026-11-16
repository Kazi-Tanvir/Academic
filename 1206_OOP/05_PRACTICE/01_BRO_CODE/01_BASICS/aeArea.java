import java.util.Scanner;

public class aeArea {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        float height = scanner.nextFloat();
        float width = scanner.nextFloat();
        float area = height*width;

        System.out.println(area);

        scanner.close();
    }
}
