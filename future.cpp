#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

	int n,sum,num,test,i;
	cin>>test;
	while(test--)
	{
         cin>>n;sum=0;
         cin>>num;if(num%2==0)num+=1;
         sum+=num;
         for(i=1;i<n;i++)
         {
               cin>>num;
               if(num%2==1)num+=1;
               sum+=num;
         }
         cin>>num;sum+=num;
         cout<<sum<<"\n";

	}
	return 0;
}