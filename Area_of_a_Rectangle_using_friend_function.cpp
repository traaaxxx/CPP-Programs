//program to find area of a rectangle using friend and member function

#include<iostream>
using namespace std;

class RECTANGLE
{
	private:
		float length, breadth;
	
	public:
		void data()
		{
			cout << "Enter the Length - ";
			cin >> length;
			cout << "Enter the Breadth - ";
			cin >> breadth;
		}
		friend class Rectangle;
};

class Rectangle
{
	public:
		void area(RECTANGLE a)
		{
			cout << "Area of the Rectangle is " << a.length * a.breadth << endl;
		}
};

int main()
{
	RECTANGLE r1;
	Rectangle r2;
	r1.data();
	r2.area(r1);
	
	return 0;
}
