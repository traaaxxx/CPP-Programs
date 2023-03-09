//program to overload unary (-) operator

#include<iostream>
using namespace std;

class Unary
{
	private:
		int a, b, c;
		
	public:
		Unary()
		{
			cin >> a >> b >> c;
		}
		
		void display()
		{
			cout << a << " " << b << " " << c;
		}
		
		void operator - ()
		{
			a = - a;
			b = - b;
			c = - c;
		}
};

int main()
{
	Unary u1;
	- u1;
	u1.display();
	
	return 0;
}
