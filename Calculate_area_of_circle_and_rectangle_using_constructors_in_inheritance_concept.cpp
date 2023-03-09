//program to calculate area of circle and rectangle using constructors in inheritance

#include<iostream>
using namespace std;

class CIRCLE
{
	protected:
		double radius;
		
	public:
		CIRCLE(double radius)
		{
			cout << endl << "Area of the Circle is " << 3.14 * radius * radius << endl;
		}
};

class RECTANGLE : public CIRCLE
{
	public:
		RECTANGLE(double radius, double breadth) : CIRCLE(radius)
		{
			cout << "Area of the Rectangle is " << radius * breadth << endl;
		}
};

int main()
{
	double radius, breadth;
	cout << "Enter the radius/length and breadth of the Circle/Rectangle - ";
	cin >> radius >> breadth;
	RECTANGLE r1(radius, breadth);
	
	return 0;
}
