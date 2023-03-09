//program to calculate the salary of an employee using inheritance

#include<iostream>
#include<string>
using namespace std;
class Employee
{
    protected:
    	string name, id, temp;
    	int salary;
    
    public:
    	void get()
    	{
    		cout << "Enter the Salary - ";
    		cin >> salary;
    		cout << "Enter the Name - ";
    		getline(cin, name);
    		getline(cin, temp);
    		cout << "Enter the ID - ";
    		getline(cin, id);
		}
};

class Regular : public Employee
{
    int DA, HRA, BS, SAL;
    public:
    	void getD()
    	{
    		get();
    		cout << endl << "Enter Dearness Allowance - ";
    		cin >> DA;
    		cout << "Enter House Rent Allowance - ";
    		cin >> HRA;
    		cout << "Enter Basic Salary - ";
    		cin >> BS;
		}
		
		void calc()
		{
			SAL = DA + HRA + BS;
			cout << endl << "Total Salary of Regular Employee is Rs. " << SAL;
			cout << endl << endl;
		}
};

class Part_Time : public Employee
{
    int NH, PPH, SAL;
    public:
    	void getD()
    	{
    		get();
    		cout << endl << "Enter Number of Hours - ";
    		cin >> NH;
    		cout << "Enter Pay Per Hour - ";
    		cin >> PPH;
		}
		
		void calc()
		{
			SAL = NH * PPH;
			cout << endl << "Total Salary of Part Time Employee is Rs. " << SAL << endl;
		}
};

int main()
{
    Regular E1;
	Part_Time E2;
    E1.getD();
    E1.calc();
    E2.getD();
    E2.calc();
}
