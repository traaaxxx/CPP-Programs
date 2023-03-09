//program to find the sum of complex numbers using friend function

#include<iostream>
using namespace std;

class complex
{
	private:
		int r, i;
	
	public:
		void set()
		{
			cout << "Enter the Real and Imaginary part - ";
			cin >> r >> i;
		}
		void display();
	friend complex sum(complex, complex);
};

void complex :: display()
{
	cout << endl << "The Sum of the Complex Numbers are " << r << " + " << i << "i";
}

complex sum(complex a, complex b)
{
	complex t;
	t.r = a.r + b.r;
	t.i = a.i + b.i;
	return t;
}

int main()
{
	complex a, b, c;
	a.set();
	b.set();
	c = sum(a, b);
	c.display();
	
	return 0;
}


