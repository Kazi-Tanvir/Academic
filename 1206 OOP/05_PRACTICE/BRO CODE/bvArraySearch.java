public class bvArraySearch {
    public static void main(String[] args) {
        int[] numbers = { 10, 20, 30, 40, 50 };

        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] == 30) {
                System.out.println("Found 30 at index: " + i);
                break;
            }
        }
    }
}
