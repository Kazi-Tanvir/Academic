public class azSwitchWeekEnd {
    public static void main(String[] args) {
        String day = "Saturday";
        String dayType;

        switch (day) {
            case "Saturday" , "Sunday":
                dayType = "Weekend";
                break;
            case "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday":
                dayType = "Weekday";
                break;
            default:
                dayType = "Invalid day";
        }

        System.out.println("The day is: " + dayType);
    }
}
