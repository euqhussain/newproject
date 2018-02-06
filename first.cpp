#include<iostream>
using namespace std;
int main()
 {
   int a[100],i,j,n;
   cout<<"Roll 161210017\n";
   cout<<"enter the number of elements ";
   cin>>n;
   cout<<"enter the elements ";
   for(i=0;i<n;i++)
   cin>>a[i];
   for(i=0;i<n-1;i++)
   for(j=0;j<n-1-i;j++)
   {
     if(a[j]>a[j+1])
     {
       a[j]+=a[j+1];
       a[j+1]=a[j]-a[j+1];
       a[j]=a[j]-a[j+1];

     }
   }
   cout<<"the sorted array is\n";
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   return 0;
 }
