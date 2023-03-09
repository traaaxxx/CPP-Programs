//program to add two complex numbers

#include<iostream>
using namespace std;

class Complex
{
	public:
		int real;
		int imaginary;
	
	void value()
	{
		cin >> real;
		cin >> imaginary;
	}
	
	void display()
	{
		cout << real << " + " << imaginary << "i" << endl;
	}
	
	void sum(Complex c1, Complex c2)
	{
		real = c1.real + c2.real;
		imaginary = c1.imaginary + c2.imaginary;
	}
};

int main()
{
	Complex c1, c2, c3;
	cout << "Enter the Real and Imaginary part of first complex number - ";
	c1.value();
	cout << "Enter the Real and Imaginary part of second complex number - ";
	c2.value();
	cout << endl << "The Sum of the two numbers is ";
	c3.sum(c1, c2);
	c3.display();
	
	return 0;
}
