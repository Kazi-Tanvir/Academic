public class User {
    String username;
    String email;
    int age;
    boolean isEnrolled;


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
