public class Main {
    public static void main(String[] args) {
        //Autoboxing
        Integer a = 123;
        Double b = 3.14;
        Character c = 'A';
        String d = "Hello";

        //Unboxing
        int x = a;
        double y = b;
        char z = c;
        String w = d;

        // Wrapper class methods
        String p = Integer.toString(123);
        String q = Double.toString(3.14);
        String r = Character.toString('A');

        // Wrapper class methods to convert String to primitive types
        int m = Integer.parseInt("123");
        double n = Double.parseDouble("3.14");
        boolean o = Boolean.parseBoolean("true");
        String str = p + " " + q + " " + r + " " ;
        System.out.println(str);

        char letter = 'A';
        System.out.println(Character.isUpperCase(letter)); // true
        System.out.println(Character.isLetter(letter)); // true

    }
}