public class Main {
    public static void main(String[] args) {
        User user1 = new User();
        user1.displayInfo();

        User user2 = new User("kazi Tanvir",18);
        user2.displayInfo();

        User user3 = new User("kazi Tanvir",18,"email");
        user3.displayInfo();
        
    }
}
