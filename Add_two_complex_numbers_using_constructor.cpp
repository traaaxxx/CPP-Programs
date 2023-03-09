//program to perform addition of two complex numbers using constructor

#include<iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int imaginary;
		
	public:
		Complex(int a, int b)
		{
			real = a;
			imaginary = b;
		}
		
		void add(Complex c1, Complex c2)
		{
			real = c1.real + c2.real;
			imaginary = c1.imaginary + c2.imaginary;
		}
		
		void display()
		{
			cout << real << " + " << imaginary << " i " << endl;
		}
};

int main()
{
	int real, imaginary;
	
	cout << "Enter the Real and Imaginary part of first complex number - ";
	cin >> real >> imaginary;
	Complex c1(real, imaginary);
	
	cout << "Enter the Real and Imaginary part of second complex number - ";
	cin >> real >> imaginary;
	Complex c2(real, imaginary);
	
	Complex c3(real, imaginary);
	c3.add(c1, c2);
	cout << endl << "Sum of the two numbers is ";
	c3.display();
	
	return 0;
}
