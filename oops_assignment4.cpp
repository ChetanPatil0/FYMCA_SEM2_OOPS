#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex() {
    	real=0.0;
		imag=0.0;
	}
    Complex(double r, double i){
	real=r;
	imag=i; 
	}

    double getReal() { return real; }
    double getImag() { return imag; }

    Complex operator+(const Complex& other){
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other){
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other){
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }

    Complex operator/(const Complex& other){
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
                       (imag * other.real - real * other.imag) / denominator);
    }

    void display() const {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.5);

    Complex add_result = c1 + c2;
    Complex sub_result = c1 - c2;
    Complex mul_result = c1 * c2;
    Complex div_result = c1 / c2;

    
    cout << "Addition result: "; add_result.display();
    cout << "Subtraction result: "; sub_result.display();
    cout << "Multiplication result: "; mul_result.display();
    cout << "Division result: "; div_result.display();

    return 0;
}

