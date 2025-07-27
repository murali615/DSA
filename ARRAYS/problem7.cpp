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
    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"largest element in an array is: "<<largest;
 }