//program to demonstrate call by value, call by reference, call by address

#include <iostream>
using namespace std;

void cbv(int a, int b)
{
    int s = a;
    a = b;
    b = s;
}
void cbr(int &a, int &b)
{
    int s = a;
    a = b;
    b = s;
}
void cba(int *a, int *b)
{
    int s = *a;
    *a = *b;
    *b = s;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: " ;
    cin >> a >> b;
    cout << "\nThe numbers are: ";
    cout << a;
    cout << b << endl;
    
    cbv(a, b);
    cout << "\nCall By Value Function: ";
    cout << a;
    cout << b << endl;
    
    int c = a, d = b;
    cbr(a, b);
    cout << "\nCall By Reference Function: ";
    cout << a;
    cout << b << endl;
    
    cba(&c, &d);
    cout << "\nCall By Address Function: ";
    cout << a;
    cout << b << endl;
}
