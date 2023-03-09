#include<iostream>
using namespace std;

class FRACTION
{
    public:
    	int n1, d1, n2, d2;
		float sum1, sum2, sub1, sub2, prod1, prod2;
    
    void getdata()
    {
        cout << "------- First Fraction -------" << endl;
        cout << "Numerator - ";
        cin >> n1;
        cout << "Denominator - ";
        cin >> d1;
        cout << endl << "------- Second Fraction -------" << endl;
        cout << "Numerator - ";
        cin >> n2;
        cout << "Denominator - ";
        cin >> d2;
    }
    void add(FRACTION f11)
    {
        sum1 = ((f11.d2 * f11.n1) + (f11.d1 * f11.n2));
        sum2 = (f11.d1 * f11.d2);
        cout << endl << "After Adding - " << sum1 << "/" << sum2 << endl;
    }
    void subtract(FRACTION &f22)
    {
        sub1 = ((f22.d2 * f22.n1) - (f22.d1 * f22.n2));
        sub2 = (f22.d1 * f22.d2);
        cout << "After Subtraction - " << sub1 << "/" << sub2 << endl;
    }
    void multiply(FRACTION f33)
    {
        prod1 = ((f33.n1) * (f33.n2));
        prod2 = ((f33.d1) * (f33.d2));
        cout << "After Multiplication - " << prod1 << "/" << prod2 << endl;
    }
};

int main()
{
    FRACTION f1, f2, f3, f4;
    f1.getdata();
    f2.add(f1);
    f3.subtract(f1);
    f4.multiply(f1);
    
    return 0;
}
