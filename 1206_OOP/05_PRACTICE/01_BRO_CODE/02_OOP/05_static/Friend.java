public class Friend {
    static int numOfFriends;
    // static diye ekta variable or method ke object er bodole class er property banai     
    String name;

    Friend(String name){
        this.name = name;
        numOfFriends++;
    }

    static void showFriends(){
        System.out.println("You have "+numOfFriends+" total friends");
    }
}
