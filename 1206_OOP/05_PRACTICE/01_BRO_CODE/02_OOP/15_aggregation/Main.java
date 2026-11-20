
public class Main {
    public static void main(String[] args) {
        
        Books[] books = {
            new Books("First book", 414),
            new Books("Second book", 355),
            new Books("Third book", 514)
        } ;

        Library library = new Library("Library" , 2006 , books);

        library.displayInfo();
    }
}
