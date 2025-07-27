#include<iostream>
using namespace std;
 int main()
 {
    int arr[5]={10,20,30,40};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arrsize;i++)
    {
        cout<<arr[i]<<" ";
    }
    arr[arrsize-1]=50;
    cout<<endl;
    for(int i=0;i<arrsize;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<arrsize;i++)
    {
        arr[i]=30+i+1;
        cout<<arr[i]<<" ";
        
    }
 }