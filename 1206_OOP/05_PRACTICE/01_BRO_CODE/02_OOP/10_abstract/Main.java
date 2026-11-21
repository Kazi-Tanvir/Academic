
public class Main {
    public static void main(String[] args) {
        
        Circle circle = new Circle(5);
        Rectangle rectangle = new Rectangle(4,3);
        Triangle triangle = new Triangle(4,3);

        System.out.println(circle.area());
        System.out.println(rectangle.area());
        System.out.println(triangle.area());

        circle.display();
        rectangle.display();
        triangle.display();
    }   
}
