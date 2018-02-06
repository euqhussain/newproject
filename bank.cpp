#include <iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class banka
{
	string name,type;
	long accno,balance;
    public:
    	void initialize(string name1,long accno1)
         {
            name=name1;
            type="Saving";
            accno=accno1;
            balance=1000;
         }

         void deposit(long k)
         {
            balance+=k;
            cout<<"INR "<<k<<"  deposited to your Acc/ "<<accno;
         }

         void withdraw()
         {
         	int b;
         	cout<<"Current balance : "<<balance;
         	cout<<"Enter amount to withdraw: ";
            cin>>b;
            if(balance<b)
            	cout<<"Not enough balance";
            else 
            	{
            		cout<<"Amount "<<b<<" debited from Acc "<<accno;
                    balance-=b;
                }
         }

         void display()
         {
         	cout<<"Name : "<<name<<endl;
            cout<<"Balance : "<<balance;
         }
};


int main()
{
	banka Raj;
	int p,ch,j;
	long acc;
	string name;
	Raj.initialize("Motiraj",acc);
	do
	{
		cout<<"Enter your choice \n";
		cout<<"1. To deposit amount\n "<<"2. To withdraw amount after checking balance\n"<<"3. Display name and balance\n"<<"4. Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter amount to deposit ";
			        cin>>j;
			        Raj.deposit(j);
			        break;
			case 2: Raj.withdraw();
			        break;
			case 3: Raj.display();
			        break;
			case 4: exit(0);        
		}

	}while(1);
	return 0;
}