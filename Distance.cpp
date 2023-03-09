//program to create distance class and display it

#include <iostream>
using namespace std;

class Distance 
{
    private:
        int feet;
        int inch;
        
    public:
        void setdata(int i)
		{
            char mode;
            cout << endl << "Enter Feet/Inch (f/i): ";
            cin >> mode;
            if(mode == 'f')
			{
                cout << "Enter Distance in Feet - ";
                cin >> feet;
                inch = feet * 12;
            }
            else if(mode == 'i')
			{
                cout << "Enter Distance in Inch - ";
                cin >> inch;
                feet = inch / 12;
            }
            else
			{
                cout << "Invalid Input" << endl;
            }
            cout << endl;
        }
        void displaydata()
		{
            cout << "Distance in Feet: " << feet << endl;
            cout << "Distance in Inch: " << inch << endl;
            cout << endl;
        }
        int distanceinFeet()
		{
            return feet;
        }
        int distanceinInch()
		{
            return inch;
        }
};

int main()
{
    int items;
    cout << "Enter the number of data to input - ";
    cin >> items;
    Distance d[items];
    for(int i = 0; i < items; i++)
	{
        d[i].setdata(i);
    }
    for(int i = 0; i < items; i++)
	{
        d[i].displaydata();
    }
    cout << "Sum of two Distances (Feet): " << d[0].distanceinFeet() + d[1].distanceinFeet() << endl;
    cout << "Sum of two Distances (Inch): " << d[0].distanceinInch() + d[1].distanceinInch() << endl;
    
    return 0;
}
