#include<iostream>
using namespace std;
int main()
{
	int n,a[100],i,j,num,mid,u,l,pos=-1;
	cout<<"enter the number of elements ";cin>>n;
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"\nenter the element to search ";cin>>num;
    
    l=0;u=n-1;
    while(l<=u)
    {
    	mid=(l+u)/2;
    	if(a[mid]==num){pos=mid;break;}
    	else if(num>a[mid])l=mid+1;
    	else u=mid-1;
    }
    if(pos==-1)cout<<"element not found";
    else cout<<num<<" is present at position "<<pos+1<<endl;
    return 0;

}