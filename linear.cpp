#include<iostream>
using namespace std;

int main()
{
	int n,pos=-1,a[]={2,45,9,32,11,18,39,87,100,44};
	cin>>n;
	for(int i;i<10;i++)
		if(n==a[i]){pos=i;break;}
    if(pos==-1)cout<<"element not found";
    else cout<<n<<" is present at position "<<pos+1;
    return 0;
}