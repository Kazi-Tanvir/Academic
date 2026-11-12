public class bqScope {
    int x = 10 ; //global variable
    public static void main(String[] args) {
        int x = 10; 
        System.out.println("Value of x in main: " + x);
        printValue();
    }
    static void printValue() {
        int x = 20; 
        System.out.println("Value of x in printValue: " + x);
    }
}
