//given a list of elements,find the greater element that are greater than previous elments;
//intput:1,5,3,3,2,8,7,10
//output:5,8,10
#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements to an array"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    /*for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>arr[i])
       {
        cout<<arr[i+1]<<" ";
       }
    }*/
     //another logic
     for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
       {
        cout<<arr[i]<<" ";
       }
    }
    





 }