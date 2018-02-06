#include <iostream>
using namespace std;
int main()
{
	int a[100],min,id,i,j,n;
   cout<<"Roll 161210017\n";
   cout<<"enter the number of elements ";
   cin>>n;
   cout<<"enter the elements ";
   for(i=0;i<n;i++)
   cin>>a[i];
   
   for(i=0;i<n-1;i++)
   {
     min=a[i];id=i;
     for(j=i+1;j<n;j++)
     	if(a[j]<min)
     	{
     		min=a[j];
     		id=j;
     	}
     a[id]+=a[i];
     a[i]=a[id]-a[i];
     a[id]=a[id]-a[i];	

   }
   cout<<"the sorted array is\n";
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   return 0;
   	
}