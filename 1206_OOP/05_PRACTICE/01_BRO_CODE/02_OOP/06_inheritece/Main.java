
public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();
        Plants plants = new Plants();

        plants.photosynthesis();
        dog.sound();
        cat.sound();
        dog.eat();

        System.out.println(plants.isAlive);
        System.out.println(dog.lives);
        System.out.println(cat.lives);
    }
}
