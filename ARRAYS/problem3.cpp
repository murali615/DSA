// print sum of all the elements in an array
#include<iostream>
using namespace std;
 int main()
 {
     int arr[5]={1,2,3,4,5},sum=0;
     int arrsize=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<arrsize;i++)
     {
        sum=sum+arr[i];
     }
     cout<<sum;
 }