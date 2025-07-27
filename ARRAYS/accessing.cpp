#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int arr[]={10,20,30,40};
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr1[5]={100,200,300,400};
    int arrsize=sizeof(arr1)/sizeof(arr1[0]);    
    for(int i=0;i<arrsize;i++)
    {
        cout<<arr1[i]<<" ";
    }

 }