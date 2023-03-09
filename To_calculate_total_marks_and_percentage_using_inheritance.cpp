//program to calculate total marks and percentage using inheritance

#include<iostream>
#include<string>
using namespace std;
class student
{
    protected:
    	string name, roll;
    	int age;
    	void input()
    	{
    		cout << "Enter Name - ";
			getline(cin, name);
			cout << "Roll Number - ";
			cin >> roll;
			cout << "Age - ";
			cin >> age;
		}
};

class test : public student
{
    public:
    	int m[5];
    	void get()
    	{
    		input();
			for(int i = 0; i < 5; i++)
			{
				cout << endl << "Enter Marks of Subject " << i + 1 << endl;
				cin >> m[i];
			}
		}
};

class Result : public test
{
    double total = 0;
    double percent = 0.0;
    public:
    	void cal()
    	{
    		get();
			for(int i = 0; i < 5; i++)
			{
				total = total + m[i];
			}
			percent = (total / 500) * 100;
		}
		
		void dis()
		{
			cout << endl << endl << "DETAILS ARE -" << endl;
			cout << endl << "Name - " << name << endl << "Roll Number - " << roll << endl << "Age - " << age;
			cout << endl << "Total Marks - " << total << endl;
			cout << "Percentage - " << percent;
		}
};

int main()
{
    Result s1;
    s1.cal();
    s1.dis();
}
