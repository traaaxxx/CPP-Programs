//program to define function template to find minimum value of integer and float contained in an array

#include<iostream>
#include<conio.h>
using namespace std;
template <class T> T minimum (T a[], int size)
{
	int i;
	T min = a[0];
	for(i = 0; i < size; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

int main ()
{
	int a[10], size, i, min1;
	float b[10], min2;
	cout << "Enter the size - ";
	cin >> size;
	cout << endl << "Enter the integer array elements - ";
	for(i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	cout << "Enter the floating array elements - ";
	for(i = 0; i < size; i++)
	{
		cin >> b[i];
	}
	min1 = minimum (a, size);
	min2 = minimum (b, size);
	cout << endl << "The smallest integer element is - ";
	cout << min1;
	cout << endl << "The smallest floating element is - ";
	cout << min2;
	getch ();
	
	return 0;
}
