
public class Main {
    public static void main(String[] args) {
        Car car = new Car("Ford", "Red" , 1000);
        System.out.println(car.getModel() + " " + car.getColor() + " " + car.getPrice());
        
        car.setColor("Blue");
        car.setPrice(-5000);
        car.setPrice(5000);
        System.out.println(car.getModel() + " " + car.getColor() + " " + car.getPrice());
    }
}
