//program to add two time objects and display using constructor

#include<iostream>
using namespace std;

class TIME
{
	private:
		int hour;
		int minute;
		int second;
		
	public:
		TIME(int h, int m, int s)
		{
			hour = h;
			minute = m;
			second = s;
		}
		
		TIME add(TIME t1, TIME t2)
		{
			second = t1.second + t2.second;
			minute = t1.minute + t2.minute + (second / 60);
			hour = t1.hour + t2.hour + (minute / 60);
			minute = minute % 60;
			second = second % 60;
		}
		
		void display()
		{
			cout << endl << "HH : MM : SS - " << hour << " : " << minute << " : " << second << endl;
		}
};

int main()
{
	int hour, minute, second;
	
	cout << "Enter Time 1 (HH : MM : SS) - ";
	cin >> hour >> minute >> second;
	TIME t1(hour, minute, second);
	
	cout << "Enter Time 2 (HH : MM : SS) - ";
	cin >> hour >> minute >> second;
	TIME t2(hour, minute, second);
	
	TIME t3(hour, minute, second);
	cout << endl << "------- Total Time -------" << endl;
	t3.add(t1, t2);
	t3.display();
	
	return 0;
}
