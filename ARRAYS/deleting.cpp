#include<iostream>
using namespace std;
 int main()
 {
    int arr[5]={10,20,0,30,40};
    int index=2;
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arrsize-1;i++)
    {
        if(i>=index)
        {
            arr[i]=arr[i+1];
            
        }
        cout<<arr[i]<<" ";
    }
    
 }