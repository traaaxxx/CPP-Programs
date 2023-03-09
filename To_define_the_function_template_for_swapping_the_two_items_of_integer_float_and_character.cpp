//program to define the function template for swapping the two items of integer, float and character

#include<iostream>
using namespace std;
template <class T>
void swap_numbers(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap_numbers(a, b);
    
    float p, q;
    p = 69.50;
    q = 75.50;
    swap_numbers(p, q);
    
    cout << "The new values are " << a << " and " << b << endl;
    cout << "The new values are " << p << " and " << q << endl;
    
    return 0;
}
