
public class Main {
    public static void main(String[] args) {
        Dog dog1 = new Dog(){
            @Override 
            void speak(){
                System.out.println("Ruh Roh");
            }
        };
        Dog dog2 = new Dog();
        dog1.speak();
        dog2.speak();
    }
}