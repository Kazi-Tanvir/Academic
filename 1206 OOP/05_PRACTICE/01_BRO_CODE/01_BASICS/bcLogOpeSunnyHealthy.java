public class bcLogOpeSunnyHealthy {
    public static void main(String[] args) {
        boolean isSunny = true;
        boolean isHealthy = false;

        if (isSunny && isHealthy) {
            System.out.println("It's a sunny and healthy day!");
        } else if (isSunny || isHealthy) {
            System.out.println("It's either sunny or healthy.");
        } else {
            System.out.println("It's neither sunny nor healthy.");
        }
    }
}
