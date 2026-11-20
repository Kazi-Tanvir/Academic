public class Main {
    public static void main(String[] args) {
        Student student = new Student("Kazi", "Tanvir", 3.44);
        Employee employee = new Employee("Kazi", "Tanvir", 30000.00);

        student.showGPA();
        employee.showSalary();
    }
}