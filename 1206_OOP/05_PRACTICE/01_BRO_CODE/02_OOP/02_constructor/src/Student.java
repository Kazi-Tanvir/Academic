public class Student {
    String name;
    int age;
    double cgpa;
    boolean isEnrolled;

    Student(String name, int age,double cgpa ){
        this.name = name;
        this.age = age;
        this.cgpa = cgpa;
        this.isEnrolled = true;
    }
    void displayInfo(){
        System.out.println(name);
        System.out.println(age);
        System.out.println(cgpa);
    }

    void study(){
        System.out.println(name + " is currently studying!");
    }
}
