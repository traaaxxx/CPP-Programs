//program to add two members from two different class using friend function

#include<iostream>
using namespace std;

class DB;
class DM
{
	private:
		int meter;
		int centimeter;
		
	public:
		DM(int m, int cm)
		{
			meter = m;
			centimeter = cm;
		}
		
		void display()
		{
			cout << meter << "m " << centimeter << "cm ";
		}

	friend DM add(DM, DB);	
};

class DB
{
	private:
		int feet;
		int inch;
		
	public:
		DB(int f, int i)
		{
			feet = f;
			inch = i;
		}
		
		void display()
		{
			cout << feet << "feet " << inch << "inch ";
		}
	
	friend DM add(DM, DB);
};

DM add(DM d1, DB d2)
{
	int total_cm;
	total_cm = (d1.meter * 100 + d1.centimeter) + (d2.feet * 12 + d2.inch) * 2.54;
	int m, cm;
	m = total_cm / 100;
	cm = total_cm % 100;
	DM d3(m, cm);
	return d3;
}

int main()
{
	int meter, centimeter, feet, inch;
	
	cout << "Enter distance in meter and centimeter respectively - ";
	cin >> meter >> centimeter;
	DM o1(meter, centimeter);
	
	cout << "Enter distance in feet and inch respectively - ";
	cin >> feet >> inch;
	DB o2(feet, inch);
	
	DM o3 = add(o1, o2);
	cout << endl << "The Sum of the two numbers is ";
	o3.display();
	
	return 0;
}
