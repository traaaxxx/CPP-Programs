//program to input and display the details of a student using inheritance

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
    int m[5];
    public:
    	void get()
    	{
    		input();
			for(int i = 0; i < 5; i++)
			{
				cout << endl << "Enter Marks of Subject " << i + 1 << endl;
				cin >> m[i];
			}
		}
		
		void dis()
		{
			cout << endl << endl << "DETAILS ARE -" << endl;
			cout << endl << "Name - " << name << endl << "Roll Number - " << roll << endl << "Age - " << age;
			for(int i = 0; i < 5; i++)
			{
				cout << endl << "Marks of Subject " << i + 1 << " is " << m[i];
			}
		}
};

int main()
{
    test s1;
    s1.get();
    s1.dis();
}
