//program to overload unary (+), unary (++) and unary (--) operator

#include<iostream>
using namespace std;

class Unary
{
    int x;
    public:
    	Unary()
    	{
			cin >> x;
		}
		
		void display()
		{
			cout << x << " ";
		}
		
		void operator + ()
		{
			x = + x;
		}
		
		void operator ++ (int)
		{
			x = ++ x;
		}
		
		void operator -- (int)
		{
			x = -- x;
		}
};

int main()
{
    Unary x1;
    + x1;
    x1.display();
    x1 ++;
    x1.display();
    x1 --;
    x1.display();

    return 0;
}
