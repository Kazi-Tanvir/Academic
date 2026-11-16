public class ajIfElse {
    public static void main(String[] args) {
        int age = 20;
        String name = "John";
        boolean isGorbhoboti = true;
        if(isGorbhoboti) {
            System.out.println(name + " is a gorbhoboti Dhabian.");
            if (age >= 18) {
                System.out.println(name + " is an adult.");
            } 
            else if(age < 18) {
                System.out.println(name + " is a minor.");
            }
            else {
                System.out.println(name + " is still inside balls.");
            }
        } else {
            System.out.println(name + " is a bohiragoto.");
        }
    }

}
