#include<iostream>
using namespace std;

int main()
{
int x;
cin>>x;
if((x&(x-1))==0 || x==1)cout<<"yes\n";
else cout<<"no\n";
return 0;
}