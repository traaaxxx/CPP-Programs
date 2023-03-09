//program to store sports grade and exam grade using constructor in inheritance

#include<iostream>
#include<cstdlib>
using namespace std;

class Student 
{
    protected:
    	string name;
    	int id;
           
    public:
    	Student()
    	{
    		name = "Ram";
			id = rand();
		}
		
		void display() 
		{
			cout << "Student Name - " << name;
			cout << endl << "Student ID - " << id;
		}
};

class Sports : virtual public Student 
{
    protected:
    	int s_grade;
    
    public:
    	Sports()
    	{
    		s_grade = 80 + (rand() % (100 - 80 + 1));
		}
		
		void display()
		{
			cout << endl << "Sports Grade - " << s_grade;
		}
};

class Exam : virtual public Student 
{
    protected:
    	int e_grade;
    
    public:
    	Exam() 
    	{
    		e_grade = 80 + (rand() % (100 - 80 + 1));
		}
		
		void display()
		{
			cout << endl << "Exam Grade - " << e_grade;
		}
};

class Results : public Sports, public Exam 
{
    public:
    	Results () {}
		
		void display() 
		{
			Student :: display();
			Sports :: display();
			Exam :: display();
        }
};

int main() 
{
    Results r;
    r.display();
    
    return 0;
}
