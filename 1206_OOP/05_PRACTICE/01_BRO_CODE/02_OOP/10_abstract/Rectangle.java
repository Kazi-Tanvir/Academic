

public class Rectangle extends Shape{
    int height;
    int width;
    Rectangle(int height, int width){
        this.height = height;
        this.width = width;
    }

    @Override 
    double area(){
        return this.height*this.width;
    }
}
