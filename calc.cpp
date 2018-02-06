#include<iostream>
using namespace std;

class calc
{
	int a,b;
public:
	void getdata(int x,int y)
	{
		a=x;b=y;
	}                                                                                                                                                                                                                                 
	int add()
	{
		cout<<a+b;
	}
	int sub()
	{
		cout<<a-b;
	}
};

int main()
{
	calc obj;
	int a,b,c;
	cout<<" choice 1. addition  2. subtraction";
	cin>>a;
	cin>>b>>c;
	obj.getdata(b,c);
	if(a==1)obj.add();
	else obj.sub();
	cout<<endl;
	return 0;
}