//Throw exceptions and catch them in different catch blocks

#include<iostream>
using namespace std;
void f1(int k)
{
    try
    {
        if(k > 0)
        throw k;
        if(k < 0)
        throw 'A';
        else if(k == 0)
        throw 0;
    }

    catch(int p)
	{
        cout << "Caught a value equal to " << p;
    }

    catch(float p)
	{
        cout << "Caught a positive value " << p;
    }

    catch(char p)
	{
        cout << "Caught a negative value " << p;
    }
}

int main()
{
    int i;
    cout << "Enter your desired value - ";
    cin >> i;
    f1(i);

    return 0;
}
