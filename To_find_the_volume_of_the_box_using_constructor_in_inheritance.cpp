//program to find the volume of the box using constructor in inheritance

#include<iostream>
using namespace std;

class CIRCLE
{
    private:
        double radius;
        
    public:
        CIRCLE(double r)
		{
            radius = r;
        }
        
        void circle_area()
		{
            double area = 3.14 * radius * radius;
            cout << endl << "Area of the Circle is " << area;
        }
};

class RECTANGLE : public CIRCLE
{
    private:
        double length;
        double breadth;
        
    public:
        RECTANGLE(double l, double b) : CIRCLE(l)
		{
            length = l;
            breadth = b;
        }
        
        void rectangle_area()
		{
            double area = length * breadth;
            cout << endl << "Area of the Rectangle is " << area;
        }
};

class BOX : public RECTANGLE
{
    private:
        double length;
        double breadth;
        double height;
        
    public:
        BOX(double l, double b, double h) : RECTANGLE(l, b)
		{
            length = l;
            breadth = b;
            height = h;
        }
        
        void box_volume()
		{
            double volume = length * breadth * height;
            cout << endl << "Volume of the Box is " << volume;
        }
};

int main()
{
    double length, breadth, height;
	cout << "Enter the Length, Breadth and Height of the Box - ";
	cin >> length >> breadth >> height;
	BOX b(length, breadth, height);
    b.circle_area();
    b.rectangle_area();
    b.box_volume();

    return 0;
    cout << "Exiting..." << endl; 
}
