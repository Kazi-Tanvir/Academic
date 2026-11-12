public class aqNestedIfElse {
    public static void main(String[] args) {
        boolean isStudent = true;
        boolean isSenior = false;
        double price = 100.0;

        if(isStudent) {
            System.out.println("You are a student and you get a 20% discount.");
            isSenior = true;
            if(isSenior) {
                System.out.println("You are a senior student. and you get an extra 10% discount.");
                price *= 0.7; 
            } else {
                System.out.println("You are a junior student.");
                price *= 0.8; 
            }
        } else {
            System.out.println("You are not a student.");
        }

        System.out.println("Final price: " + price);

    }
}
