//program to find out greatest between two numbers defined in two different classes using friend function

#include<iostream>
using namespace std;

class B;
class A
{
    public:
    	int a;
    	void get()
    	{
    		cin >> a;
		}
	friend int cal(A, B);
};

class B
{
	public:
		int b;
		void get()
		{
			cin >> b;
		}
		
	friend int cal(A, B);
};

int cal(A n1, B n2)
{
    return n1.a > n2.b ? n1.a : n2.b;
}

int main()
{
    A x1;
    B x2;
    x1.get();
    x2.get();
    cout << cal(x1, x2);
}

