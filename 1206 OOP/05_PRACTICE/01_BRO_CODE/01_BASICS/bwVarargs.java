public class bwVarargs {
    public static void main(String[] args) {
        add(1, 2, 3, 4, 5);
    }

    public static void add(int... numbers) {
        int sum = 0;
        for (int number : numbers) {
            sum += number;
        }
        System.out.println("Sum: " + sum);
    }
}
