public class agArithmetic {
    public static void main(String[] args) {
        int a = 5;
        int b = 10;

        a += b; // a = 15
        System.out.println("Addition: " + a);
        a -= b; // a = 5
        System.out.println("Subtraction: " + a);
        a *= b; // a = 50
        System.out.println("Multiplication: " + a);
        a /= b; // a = 5
        System.out.println("Division: " + a);
        a %= b; // a = 5
        System.out.println("Modulus: " + a);
    }
}
