public class Main {
    public static void main(String[] args) {
        Student student1 = new Student("Kazi Tanvir", 18, 3.44);
        student1.displayInfo();
        Student student2 = new Student("Tanvir", 19, 3.44);
        student2.displayInfo();
        student2.study();
    }
}
