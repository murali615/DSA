//print only even nunbers in array
#include<iostream>
using namespace std;
 int main()
 {
    int arr[5]={10,20,23,45,50};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arrsize;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=arr[i];
            cout<<arr[i]<<" ";
        }
    }

 }