import java.util.Scanner;

class Rectangle {
    private double width;
    private double length;
    private double area;
    private String colour;
    
   
    public Rectangle(double width, double length, String colour) {
        this.width = width;
        this.length = length;
        this.colour = colour;
        findArea(); 
    }
    
   
    private void findArea() {
        this.area = width * length;
    }
    
   
    public double getWidth() {
        return width;
    }
    
    public double getLength() {
        return length;
    }
    
    public double getArea() {
        return area;
    }
    
    public String getColour() {
        return colour;
    }
}

public class assignment_5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
       
        System.out.println("Enter width of first rectangle:");
        double width1 = scanner.nextDouble();
        System.out.println("Enter length of first rectangle:");
        double length1 = scanner.nextDouble();
        scanner.nextLine(); 
        System.out.println("Enter colour of first rectangle:");
        String colour1 = scanner.nextLine();
        
        
        System.out.println("Enter width of second rectangle:");
        double width2 = scanner.nextDouble();
        System.out.println("Enter length of second rectangle:");
        double length2 = scanner.nextDouble();
        scanner.nextLine();
        System.out.println("Enter colour of second rectangle:");
        String colour2 = scanner.nextLine();
        
        
        Rectangle rect1 = new Rectangle(width1, length1, colour1);
        Rectangle rect2 = new Rectangle(width2, length2, colour2);
        
        
        if (rect1.getArea() == rect2.getArea() && rect1.getColour().equals(rect2.getColour())) {
            System.out.println("Matching Rectangles");
        } else {
            System.out.println("Non-matching Rectangles");
        }
    }
}
