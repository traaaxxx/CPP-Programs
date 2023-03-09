//Handle array out - of - bounds exception

#include<iostream>
using namespace std;
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	try
	{
		int i = 0;
		while(1)
		{
			if(i != 5)
			{
				cout << a[i] << endl;
				i++;
			}
			else
			{
				throw i;
			}
		}
	}

	catch(int i)
	{
		cout << "Array out of bound exception " << i << endl;
	}

	return 0;
}
