public class User {
    String username;
    String email;
    int age;
    boolean isEnrolled;

    User(){
        this.username = "Not Provided";
        this.age = 0;
        this.email = "Not Provided";
        this.isEnrolled = true;
    }
    User(String username){
        this.username = username;
        this.age = 0;
        this.email = "Not Provided";
        this.isEnrolled = true;
    }
    User(String username, int age){
        this.username = username;
        this.age = age;
        this.email = "Not Provided";
        this.isEnrolled = true;
    }
    User(String username, int age,String email){
        this.username = username;
        this.age = age;
        this.email = email;
        this.isEnrolled = true;
    }
    void displayInfo(){
        System.out.println(username);
        System.out.println(email);
        System.out.println(age);
    }

    void study(){
        System.out.println(username + " is currently studying!");
    }
}
