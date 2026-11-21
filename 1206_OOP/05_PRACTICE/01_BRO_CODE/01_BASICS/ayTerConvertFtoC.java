public class ayTerConvertFtoC {
    public static void main(String[] args) {

        int temperature = 100;
        double fahrenheit = temperature * ( 9 / 5) + 32;
        double celsius = (temperature - 32) * 5 / 9;
        
        System.out.println(fahrenheit + "°F is equal to " + celsius + "°C");
    }
}
