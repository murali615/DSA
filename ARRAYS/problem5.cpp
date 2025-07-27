//Given a list of numbers, find and print the first adjacent elements which have the same sign. If there is no such pair, leave the output blank.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements to an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=0&&arr[i-1]>=0||(arr[i]<0&&arr[i-1]<0))// sign comparing
        {
            cout<<arr[i-1]<<" "<<arr[i];
            break;
        }
    }
    /*for(int i=1;i<n;i++)
    {   
        if(!(arr[i]>=0^arr[i-1]>=0))
            cout<<arr[i-1]<<" "<<arr[i];
            break;
        }
    }
    */

    
}