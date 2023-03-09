//area of triangles using class and objects

#include<iostream>
using namespace std;

class Triangle
{
	float b, h;
	public:
		void getdata()
		{
			cout << "Enter the Base - ";
			cin >> b;
			cout << "Enter the Height - ";
			cin >> h;
		}
		void areatrin()
		{
			cout << "Area of the Triangle is " << b * h * 0.5 << endl;
		}	
};

int main()
{
	int n;
	Triangle t[10];
	cout << "Enter the number of Triangles - ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << endl << "For Triangle " << i + 1 << endl;
		t[1].getdata();
		t[1].areatrin();
	}
	
	return 0;
}
