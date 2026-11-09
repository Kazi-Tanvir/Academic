import java.util.Scanner;

public class bdLogOpeUsername {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your username: ");
        String username = scanner.nextLine();

        if(username.length() < 4 || username.length() > 12) 
            System.out.println("Username must be between 5 and 15 characters.");
        
        else if(username.contains(" ") || username.contains("_")) 
            System.out.println("Username cannot contain spaces or underscores.");
        else 
            System.out.println("Username is valid.");
        
        if(username.isEmpty()) 
            System.out.println("Username cannot be empty.");
        else 
            System.out.println("Your username is: " + username);

        scanner.close();
    }
        
}
