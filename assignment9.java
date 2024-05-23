import java.util.Scanner;

class InvalidUserException extends Exception {
    public InvalidUserException(String message) {
        super(message);
    }
}

public class assignment9 {

    public static void validateUser(int age, double income, String city, boolean hasFourWheeler) throws InvalidUserException {
        if (age < 18 || age > 55) {
            throw new InvalidUserException("Age must be between 18 and 55.");
        }
        if (income < 50000 || income > 100000) {
            throw new InvalidUserException("Income must be between Rs. 50,000 and Rs. 1,00,000 per month.");
        }
        if (!city.equalsIgnoreCase("Pune") && !city.equalsIgnoreCase("Mumbai") && 
            !city.equalsIgnoreCase("Bangalore") && !city.equalsIgnoreCase("Chennai")) {
            throw new InvalidUserException("City must be Pune, Mumbai, Bangalore, or Chennai.");
        }
        if (!hasFourWheeler) {
            throw new InvalidUserException("User must have a 4-wheeler.");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        try {
            System.out.print("Enter age: ");
            int age = scanner.nextInt();

            System.out.print("Enter monthly income: ");
            double income = scanner.nextDouble();
            scanner.nextLine(); // Consume the newline character

            System.out.print("Enter city: ");
            String city = scanner.nextLine();

            System.out.print("Do you have a 4-wheeler? (yes/no): ");
            String vehicleInput = scanner.nextLine();
            boolean hasFourWheeler = vehicleInput.equalsIgnoreCase("yes");

            validateUser(age, income, city, hasFourWheeler);
            System.out.println("User is valid.");
        } catch (InvalidUserException e) {
            System.out.println("Validation Error: " + e.getMessage());
        } finally {
            scanner.close();
        }
    }
}
