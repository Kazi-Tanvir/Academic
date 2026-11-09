public class ayTerConvertFtoC {
    public static void main(String[] args) {

        int temparature = 100;
        double fahrenheit = temparature * ( 9 / 5) + 32;
        double celsius = (temparature - 32) * 5 / 9;
        
        System.out.println(fahrenheit + "°F is equal to " + celsius + "°C");
    }
}
