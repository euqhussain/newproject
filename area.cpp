#include<iostream>
using namespace std;

class area
{
	int len,bre;
public:
	area(): len(10),bre(5){}

	void get()
	{
		cout<<"enter length and breadth ";
		cin>>len>>bre;
	}

	

	void output()
	{
		cout<<"area: \n"<<len*bre;
	}

	
};

int main()
{
	area a1,a2;
	int ar;
	a1.get();
	a1.output();
	return 0;
}