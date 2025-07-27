// find the largest number in an array
#include<iostream>
#include<limits.h>
using namespace std;
 int main()
 {
    int n; 
    cout<<"enter size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=smallest)
        {
           smallest=arr[i];
        }
    }
   cout<<"smallest element in an array is: "<<smallest;
 }