public class ahOpeOrder {
    public static void main(String[] args) {
        int a = 5;
        int b = 10;
        int c = 15;

        // Order of operations : PEMDAS (Parentheses, Exponents, Multiplication and Division, Addition and Subtraction)


        double result = 3 + 4 * ( 7 - 5 ) / 2.0; // Multiplication first, then addition
        // CALCULATION STEPS
        // Step 1 : Parentheses : 7 - 5 = 2
        // Step 2 : Multiplication : 4 * 2 = 8
        // Step 3 : Division : 8 / 2.0 = 4.0
        // Step 4 : Addition : 3 + 4.0 = 7.0
        System.out.println(result);

    }
}
