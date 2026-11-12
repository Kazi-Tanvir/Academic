import java.util.Random;

public class akRandomNum {
    public static void main(String[] args) {

        Random random = new Random();

        int randomNum = random.nextInt(1,101);
        double randomDouble = random.nextDouble(1,11); 
        boolean randomBoolean = random.nextBoolean();

        System.out.println(randomNum);
        System.out.println(randomDouble);
        System.out.println(randomBoolean);
    }
}
