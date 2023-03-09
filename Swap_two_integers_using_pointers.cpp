//Swap two integers using pointers

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers - ";
    cin >> a >> b;
    int *x, *y, temp;
    x = &a; 
    y = &b; 
    temp = *x; 
    *x = *y;
    *y = temp;
    cout << endl << "Numbers after swapping: ";
    cout << endl << "First Number - " << a;
    cout << endl << "Second Number - " << b;
    
    return 0;
}