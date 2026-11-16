public class asSubString {
    public static void main(String[] args) {
        String email = "example123@gmail.com";
        String username = email.substring(0, email.indexOf("@"));
        String domain = email.substring(email.indexOf("@") + 1);
        
        System.out.println("Username: " + username);
        System.out.println("Domain: " + domain);
    }
}
