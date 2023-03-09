//Division by Zero Exception

#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a - ";
    cin >> a;
    cout << "Enter the value of b - ";
    cin >> b;

    try
	{
        if(b != 0)
        {
            c = a / b;
            cout << endl << "Result is " << c;
        }
        else
        throw b;
    }

    catch(int i)
    {
        cout << endl << "Can't Divide by Zero...";
    }

    return 0;
}