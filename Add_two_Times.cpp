//program to add two time objects

#include<iostream>
using namespace std;

class TIME
{
	private:
		int hour;
		int minute;
		int second;
		
	public:
		void get_time();
		void display();
		void add(TIME t1, TIME t2);	
};

void TIME :: get_time()
{
	cout << endl << "----- Enter Time -----" << endl;
	cout << endl << "Enter in the format HH : MM : SS - ";
	cin >> hour >> minute >> second;
}

void TIME :: display()
{
	cout << endl;
	cout << "------- Total Time -------" <<  endl;
	cout << endl << "HH : MM : SS - " << hour << " : " << minute << " : " << second << endl;
}

void TIME :: add(TIME t1, TIME t2)
{
	second = t1.second + t2.second;
	minute = t1.minute + t2.minute + (second / 60);
	hour = t1.hour + t2.hour + (minute / 60);
	minute = minute % 60;
	second = second % 60;
}

int main()
{
	TIME t1, t2, t3;
	t1.get_time();
	t2.get_time();
	t3.add(t1, t2);
	t3.display();
	
	return 0;
}
