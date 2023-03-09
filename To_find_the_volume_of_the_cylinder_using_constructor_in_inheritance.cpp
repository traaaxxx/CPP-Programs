//program to find the volume of the cylinder using constructor in inheritance

#include<iostream>
#include<cmath>
using namespace std;

class  CIRCLE
{
	private:
		double radius;
		
	public:
		CIRCLE()
		{}
		
		CIRCLE(double r)
		{
			radius = r;
		}
		
		void setData(double r)
		{
			radius = r;
		}
	
		double area()
		{
			return 3.14 * pow(radius, 2);
		}		
};

class CYLINDER : CIRCLE
{
	private:
		double height;
	
	public:
		CYLINDER(double radius, double h)
		{
			setData(radius);
			height = h;
		}
		
		void volume()
		{
			cout << endl << "Volume of the Cylinder is " << area() * height << endl;
		}	
};

int main()
{
	double radius, height;
	cout << "Enter the Radius and Height of the Cylinder - ";
	cin >> radius >> height;
	CYLINDER cy(radius, height);
	cy.volume();
	
	return 0;
}
