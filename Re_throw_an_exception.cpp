//Re - throw an exception

#include<iostream>
using namespace std;
void Exception()
{
    try
    {
        throw "Hello";
    }

    catch(const char *)
    {
        cout << "Caught an exception inside " << endl;
        throw;
    }
}

int main()
{
    try
    {
        Exception();
    }

    catch(const char *)
    {
        cout << "Caught an exception in main" << endl;
    }

    return 0;
}
