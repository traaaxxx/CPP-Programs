//program to calculate and display a bill

#include <iostream>
using namespace std;

class Item
{
    public:
        string code;
        string name;
        int quantity;
        int price;
        void getdata(int i)
		{
            cout << endl << "Code " << i + 1 << ": ";
            cin >> code;
            cout << "Name " << i + 1 << ": ";
            cin >> name;
            cout << "Price " << i + 1 << ": ";
            cin >> price;
            cout << "Quantity " << i + 1 << ": ";
            cin >> quantity;
            cout << endl;
        }
        int bill()
		{
            return price * quantity;
        }
};

int main()
{
    int no_of_items;
    int total = 0;
    cout << "Enter the number of items - ";
    cin >> no_of_items;
    Item item[no_of_items];
    for(int i = 0; i < no_of_items; i++)
	{
        item[i].getdata(i);
    }
    cout << "SNo.\t" << "Code\t" << "Name\t" << "Price\t" << "Quantity\t" << "Total" << endl;
    cout << "------------------------------------------------------" << endl;
    for(int i = 0; i < no_of_items; i++)
	{
        cout << i + 1 << "\t" << item[i].code << "\t" << item[i].name << "\t" << item[i].price << "\t" << item[i].quantity << "\t\t" << item[i].bill() << endl;
        total += item[i].bill();
    }
    cout << "------------------------------------------------------" << endl;
    cout << "\t\t\t\tTotal Bill: Rs. " << total << "/-" << endl;
    return 0;
}