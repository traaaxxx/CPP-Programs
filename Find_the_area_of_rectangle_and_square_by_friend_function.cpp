//program to find the area of rectangle and square by friend function

#include<iostream>
using namespace std;

class Rectangle
{
    private:
    	float length, breadth, side;
    	
    public:
    	void data()
    	{
    		cout << "Enter the Length - ";
    		cin >> length;
    		cout<<"Enter the Breadth - ";
    		cin >> breadth;
    		cout << "Enter the Side - ";
    		cin >> side;
		}
	friend class Area;
};

class Area
{
    float a, b, c;
    public:
    	void area(class Rectangle r)
    	{
    		cout << endl << "Area of the Rectangle is " << r.length * r.breadth;
    		cout << endl << "Area of the Square is " << r.side * r.side;
		}
};

int main()
{
    Rectangle r1;
    Area r2;
    r1.data();
    r2.area(r1);
    
	return 0;
}

