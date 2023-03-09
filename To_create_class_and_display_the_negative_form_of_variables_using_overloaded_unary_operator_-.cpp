//program to create class and display the negative form of variables using overloaded unary (-) operator

#include<iostream>
using namespace std;

class Test
{
	private:
		int x, y, z;
		
	public:
		Test()
		{
			cin >> x >> y >> z;
		}
		
		display()
		{
			cout << x << " " << y << " " << z;
		}
		
		void operator - ()
		{
			x = - x;
			y = - y;
			z = - z;
		}
};

int main()
{
	Test t1;
	- t1;
	t1.display();
	
	return 0;
}
