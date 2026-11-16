public class Car {
    String make = "Ford";
    String model = "Mustang";
    int year = 1996;
    double price = 58000.00;
    boolean isRunning = false;

    void displayInfo() {
        System.out.println("Make: " + make);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
        System.out.println("Price: $" + price);
        System.out.println("Running: " + isRunning);
    }

    void start(){
        System.out.println("You have started the engine");
        isRunning = true;
    }

    void stop(){
        System.out.println("You have stopped the engine");
        isRunning = false;
    }
}
