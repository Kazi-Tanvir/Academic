public class awTerAMPM {
    public static void main(String[] args) {
        int hour = 14; 
        String amPm = (hour >= 12) ? "PM" : "AM";
        System.out.println("The time is: " + hour + " " + amPm);
    }
}
