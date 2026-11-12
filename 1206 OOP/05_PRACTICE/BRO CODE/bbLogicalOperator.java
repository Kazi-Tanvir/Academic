public class bbLogicalOperator {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int c = 30;

        boolean result1 = (a < b) && (b > c); // false
        boolean result2 = (a > b) || (b < c); // true
        boolean result3 = !(a == b); // true

        System.out.println("Result 1: " + result1);
        System.out.println("Result 2: " + result2);
        System.out.println("Result 3: " + result3);
    }
}
