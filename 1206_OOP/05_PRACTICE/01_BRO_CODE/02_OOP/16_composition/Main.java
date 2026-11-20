
public class Main {
    public static void main(String[] args) {
        Car car = new Car("ford" , 2005 , "V8");
        System.out.println(car.model);
        System.out.println(car.year);
        System.out.println(car.engine.type);

        car.start();
    }
    
}
