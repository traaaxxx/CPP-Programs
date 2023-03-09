// area of cube, cylinder and sphere by function overloading

#include <iostream>
using namespace std;
#define PI 3.1415

float area(float length, float breadth, float height)
{
    return length * breadth * height;
}

float area(float radius)
{
    return (4.0) * PI * radius * radius;
}

float area(float radius, float height)
{
    return ((2.0) * PI * radius * height) + ((2.0) * PI * radius * radius);
}

int main()
{
    float cube_l = 40.0, cube_b = 30.0, cube_h = 10.0;
    float sphere_r = 2.5;
    float cylinder_r = 2.5, cylinder_h = 10.0;
    cout << "Area of Cube = " << area(cube_l, cube_b, cube_h) << endl;
    cout << "Area of Sphere = " << area(sphere_r) << endl;
    cout << "Area of Cylinder = " << area(cylinder_r, cylinder_h) << endl;

    return 0;
}
