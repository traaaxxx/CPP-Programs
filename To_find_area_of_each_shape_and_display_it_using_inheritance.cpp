//program to find area of each shape and display it using inheritance

#include<iostream>
using namespace std;
class Shape
{
    protected:
    int l, w;
    double r = 0.0;
    double h = 0.0;
    double b = 0.0;
    
    public:
    	void getC()
    	{
    		cout << "Enter Radius of the Circle - ";
			cin >> r;
		}
		
		void getT()
		{
			cout << endl << "Enter base and height of the Triangle - ";
			cin >> b >> h;	
		}
		
		void getR()
		{
			cout << endl << "Enter length and breadth of a Rectangle - ";
			cin >> l >> b;
		}
};

class Circle : public Shape
{
    double ar = 0.0;
    public:
    	void calcC()
    	{
    		getC();
			ar = 3.14 * r * r;
			cout << endl << "Area of Circle is " << ar << endl;
		}
};

class Triangle : public Shape
{
    double ar = 0.0;
    public:
    	void calcT()
    	{
    		getT();
			ar = 0.5 * h * b;
			cout << endl << "Area of Triangle is " << ar << endl;
		}
};

class Rectangle : public Shape
{
    int ar;
    public:
    	void calcR()
    	{
    		getR();
			ar = l * b;
			cout << endl << "Area of Rectangle is " << ar << endl;
		}
}; 

int main()
{
    Circle c1;
	Triangle t1;
	Rectangle r1;
    c1.calcC();
    t1.calcT();
    r1.calcR();
}
