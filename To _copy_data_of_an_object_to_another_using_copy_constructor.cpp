//program to copy data of an object to another using copy constructor

#include<iostream>
using namespace std;

class Copy
{
	private:
		int data1;
		int data2;
		
	public:
		Copy(int a, int b)
		{
			data1 = a;
			data2 = b;
		}
		
		Copy(Copy &d)
		{
			data1 = d.data1;
			data2 = d.data2;
		}
		
		void display()
		{
			cout << "Data 1 - " << data1;
			cout << endl << "Data 2 - " << data2 << endl;
		}
};

int main()
{
	int data1, data2;
	
	cout << "Enter the datas to be copied - ";
	cin >> data1 >> data2;
	Copy c1(data1, data2);
	Copy c2 = c1;
	cout << endl << "------- Data 1 -------" << endl;
	c1.display();
	cout << endl << "------- Data 2 -------" << endl;
	c2.display();
	
	return 0;
}
