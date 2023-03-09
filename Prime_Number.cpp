//program to check whether a number is prime or not

#include <iostream>
using namespace std;

int main()
{
	int num, i, ctr = 0;
	cout << "Enter a number - "; cin >> num;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			ctr++;
		}
	}
	if (ctr == 2)
	{
		cout << "\nIt is a Prime Number";
	}
	else
	{
		cout << "\nIt is not a Prime Number";
	}
	return 0;
}