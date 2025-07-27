//to squares of a number in an array
#include<iostream>
using namespace std;
 int main()
 {
    int arr[5]={10,2,3,4,5};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arrsize;i++)
    {
        arr[i]=arr[i]*arr[i];
        cout<<arr[i]<<" ";
    }
}