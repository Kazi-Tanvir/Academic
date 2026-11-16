public class Main {
    public static void main(String[] args) {
        User[] users = {
            new User("kazi Tanvir",18,"email"),
            new User("kazi Tanvir",18,"email"),
            new User("kazi Tanvir",18,"email")
        };

        for (User user : users) {
            user.username = "tanvir";
            user.age= 50;
        }
        for(User user : users){
            user.displayInfo();
        }
        
    }
}
