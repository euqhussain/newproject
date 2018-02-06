#include<iostream>
using namespace std;

class gcd1
{
public:
	inline int gcd(int x,int y)
	{
		if(x==0 || y==0)return x+y;
		if(x%y==0)return y;
		else return(gcd(y,x%y));
	}
};

int main()
{

int x,y;
gcd1 obj;
cin>>x>>y;
cout<<obj.gcd(x,y)<<endl;
}