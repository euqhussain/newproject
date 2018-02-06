#include<iostream>
using namespace std;

class conv
{
	float length;
public:
	conv(float len)
	{
		length=len;
	}
	friend void print(conv x);
	
};

void print(conv x)
	{
		int ch;
		cout<<"enter choice\n";
	    cout<<"1. inches to cm  2. km to miles\n";
	    cin>>ch;
		if(ch==1)
			cout<<0.3937*x.length<<" cm\n";
		else cout<<0.621*x.length<<" miles\n";
	}

int main()
{
	float l;
	cout<<"Enter length ";
	cin>>l;
	conv obj(l);
	print(obj);
}