#include<iostream>
using namespace std;


class complex
{
	int real,cmp;
public:
	complex(int r=0,int i=0){real=r;cmp=i;}

	complex operator +(complex const &obj)
	{
		complex res;
		res.real=real*obj.real-cmp*obj.cmp;
		res.cmp=cmp+obj.cmp;
		return res;
	}
	void print()
	{
		cout<<real<<"+"<<cmp<<"i\n";
	}

};



int main()
{
  cout<<"161210017\n";
  complex c1(6,8),c2(12,19);
  complex c3=c1+c2;
  c3.print();
  return 0;
}