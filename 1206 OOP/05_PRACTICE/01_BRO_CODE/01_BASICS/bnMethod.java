public class bnMethod {
    public static void main(String[] args) {
        happyBirthday("John", 25);
        square(5);
        cube(3);
        fullName("John", "Doe");
        ageCheck(20);
    }
    static void happyBirthday(String name, int age){
        System.out.println("Happy Birthday " + name + "!");
        System.out.println("You are now " + age + " years old!");
    }

    static void square(int num){
        System.out.println(num * num);
    }

    static void cube(int num){
        System.out.println(num * num * num);
    }

    static void fullName(String firstName, String lastName){
        System.out.println("Your full name is " + firstName + " " + lastName);
    }

    static void ageCheck(int age){
        if (age >= 18){
            System.out.println("You are an adult.");
        } else {
            System.out.println("You are a minor.");
        }
    }
}
