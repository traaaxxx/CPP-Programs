//program to design a bank account

#include <iostream>
using namespace std;

class account
{
    int account_number;
    string name;
    string type;
    int balance;

    public: 
        void initial();
        void deposit();
        void withdraw();
        void display();
};

void account :: initial()
{
    cout << endl << "----- Bank Account -----" << endl;
    cout << endl << "Enter Name - ";
    cin >> name;
    cout << "Enter Account Number - ";
    cin >> account_number;
    cout << "Enter Type - ";
    cin >> type;
    while(1)
	{
        int bal = 0;
        cout << "Enter Balance - ";
        cin >> bal;
        if(bal < 500)
		{
            cout << "\nAccount Balance must be more than Rs. 500. Kindly enter the amount again..." << endl;
            continue;
        }
        balance = bal;
        break;
    }
}

void account :: deposit()
{
    while(1)
	{
        int bal;
        cout << endl << "Enter the Amount to be deposited - ";
        cin >> bal;
        balance += bal;
        cout << "\n----- Amount Successfully Deposited -----";
        break;
    }
}

void account :: withdraw()
{
    while(1)
	{
        int withdraw1;
        cout << "\nEnter Amount to be withdrawn - ";
        cin >> withdraw1;
        if((balance - withdraw1) < 500)
		{
            cout << "\nAmount cannot be withdrawn as it will leave insufficient funds in the account. Please add funds to the account..." << endl;
            break;
        }
        balance -= withdraw1;
        cout << endl << "------ Amount Successfully Withdrawn ------";
        break;
    }
}

void account :: display()
{
    cout << endl <<"----- Details -----";
    cout << endl << "Name - " << name;
    cout << endl << "Account Number - " << account_number;
    cout << endl << "Account Balance - " << balance;
}

int main()
{
    account a1;
    a1.initial();
    while(1)
	{
        int choice;
        cout << "\n\nThe available operations are -" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Details" << endl;
        cout << "4. End" << endl;
        cout << "Enter your choice - ";
        cin >> choice;

        if(choice == 1)
		{
            a1.deposit();
            continue;
        }

        else if(choice == 2)
		{
            a1.withdraw();
            continue;
        }

        else if(choice == 3)
		{
            a1.display();
            continue;
        }

        else if(choice == 4)
		{
            cout << endl << "----- Ending -----";
            break;
        }

        else
		{
            cout << "\n----- Wrong Choice -----";
            continue;
        }
    }
}
