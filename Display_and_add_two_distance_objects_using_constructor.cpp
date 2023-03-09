//program to display and add two distance objects using constructor

#include<iostream>
using namespace std;

class DISTANCE
{
	private:
		int feet;
		int inch;
		
	public:
		DISTANCE(int f, int i)
		{
			feet = f;
			inch = i;
		}
		
		void add(DISTANCE d1, DISTANCE d2)
		{
			feet = d1.feet + d2.feet;
			inch = d1.inch + d2.inch;
		}
		
		void display()
		{
			cout << "Feet - " << feet << endl << "Inch - " << inch << endl;
		}	
};

int main()
{
	int feet, inch;
	
	cout << "Enter Feet 1 - ";
	cin >> feet;
	cout << "Enter Inch 1 - ";
	cin >> inch;
	DISTANCE d1(feet, inch);
	
	cout << endl << "Enter Feet 2 - ";
	cin >> feet;
	cout << "Enter Inch 2 - ";
	cin >> inch;
	DISTANCE d2(feet, inch);
	
	DISTANCE d3(feet, inch);
	cout << endl << "------- First Distance -------" << endl;
	d1.display();
	cout << endl << "------- Second Distance -------" << endl;
	d2.display();
	
	d3.add(d1, d2);
	
	cout << endl << "------- After Adding -------" << endl;
	d3.display();
	
	return 0;
}
