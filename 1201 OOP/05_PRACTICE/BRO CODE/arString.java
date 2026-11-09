public class arString {
    public static void main(String[] args) {
        String name = "Bro Code";

        if (name.isEmpty()) System.out.println("String is empty");
        else System.out.println(name);
        
        if (name.equals("Bro Code")) System.out.println("String is equal");
        else System.out.println("String is not equal");
        
        int length = name.length();
        System.out.println(length);

        char letter = name.charAt(0);
        System.out.println("Char at index 0 : " + letter);

        int index = name.indexOf(" ");
        System.out.println("Index of ' ': " + index);

        int lastIndex = name.lastIndexOf("o");
        System.out.println("Last index of 'o': " + lastIndex);

        name = name.toUpperCase();
        System.out.println(name);

        name = name.toLowerCase();
        System.out.println(name);

        name = name.trim();
        System.out.println(name);

        name = name.replace("o", "a");
        System.out.println(name);
    }
}
