// given an array of elements to print only even index elemnts
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arrsize;i++)
    {
        if(i%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
}