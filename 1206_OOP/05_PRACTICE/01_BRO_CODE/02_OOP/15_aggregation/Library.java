
public class Library {
    String name;
    int year;
    Books[] books;

    Library(String name, int year, Books[] books){
        this.name = name;
        this.year = year;
        this.books = books;
    }

    void displayInfo(){
        System.out.println(this.name + "(" + this.year + ")");
        for (Books book : books) {
            System.out.println(book.name + " has (" + book.pages + "pages)");
        }
    }
}
