// find average of all array elments
#include<iostream>
using namespace std;
int main()
{
   int n,sum=0;
   cout<<"enter array size"<<endl;
   cin>>n;
   int arr[n];
   cout<<"enter array elements"<<endl;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
       arr[i]=0;
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i];
   }
   

   //cout<<(sum/n);
}