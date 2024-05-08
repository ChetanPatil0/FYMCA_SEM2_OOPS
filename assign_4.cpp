#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
 
    Complex() : real(0.0), imaginary(0.0) {}

   
    Complex(double r, double i) : real(r), imaginary(i) {}

    
    double getReal() const { return real; }
    double getImaginary() const { return imaginary; }

    
    friend Complex operator+(const Complex& c1, const Complex& c2) {
        return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
    }

   
    friend Complex operator-(const Complex& c1, const Complex& c2) {
        return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
    }

   
    Complex operator*(const Complex& c) const {
        double realPart = (real * c.real) - (imaginary * c.imaginary);
        double imagPart = (real * c.imaginary) + (imaginary * c.real);
        return Complex(realPart, imagPart);
    }

  
    Complex operator/(const Complex& c) const {
        double denominator = (c.real * c.real) + (c.imaginary * c.imaginary);
        double realPart = ((real * c.real) + (imaginary * c.imaginary)) / denominator;
        double imagPart = ((imaginary * c.real) - (real * c.imaginary)) / denominator;
        return Complex(realPart, imagPart);
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(1, 4);
  
    Complex addition = c1 + c2;
    Complex subtraction = c1 - c2;

    std::cout << "Addition: " << addition.getReal() << " + " << addition.getImaginary() << "i\n";
    std::cout << "Subtraction: " << subtraction.getReal() << " + " << subtraction.getImaginary() << "i\n";

   
    Complex multiplication = c1 * c2;
    Complex division = c1 / c2;

    std::cout << "Multiplication: " << multiplication.getReal() << " + " << multiplication.getImaginary() << "i\n";
    std::cout << "Division: " << division.getReal() << " + " << division.getImaginary() << "i\n";

    return 0;
}

  

