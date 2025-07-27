#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int arr[5]={10,20,2,40,0};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+arrsize);
    cout<<"for Ascending order"<<endl;
    for(int i=0;i<arrsize;i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+arrsize,greater<int>());
    cout<<endl<<"for descending order"<<endl;
    for(int i=0;i<arrsize;i++)
    {
        cout<<arr[i]<<" ";
    }
 }