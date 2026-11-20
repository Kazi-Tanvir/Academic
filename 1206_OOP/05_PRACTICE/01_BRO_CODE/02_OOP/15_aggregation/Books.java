
public class Books {
    String name;
    int pages;

    Books(String name, int pages){
        this.name = name;
        this.pages = pages;
    }

    void displayInfo(){
        System.out.println(this.name + " has (" +this. pages + "pages)");
    }
}
