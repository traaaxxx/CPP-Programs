//program to demonstrate all types of inheritance

#include<iostream>
using namespace std;
class A
{
    protected:
    	int p = 20;
};

class B : public A
{
    public:
    	void out()
    	{
    		cout << "Value of P is " << p << endl;
		}
};

class C
{
    protected:
    	int q = 10;
};

class D : public A, public C
{
    protected:
    	int sum;

    public:
    	void cal()
    	{
    		sum = p + q;
			cout << "The Sum is " << sum << endl;
		}
};

class E : public virtual C
{
    protected:
    	int a = 5;
};

class F : public virtual C
{
    protected:
    	int b = 20;
};

class G : public E, public F
{
    int s;
    public:
    	void S()
    	{
    		s = q + a + b;
			cout << "The Sum is " << s << endl;
		}
};

int main()
{
    B b1;
	D d1;
	G g1;
    b1.out();
    d1.cal();
    g1.S();
}
