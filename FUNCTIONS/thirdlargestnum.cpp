#include<bits/stdc++.h>
using namespace std;
 int thlarg(int arr[],int size)
 {
      int second=-1,largest=-1,third=-1;
        for(int i=0;i<size;i++)
        {  
            if(arr[i]>largest)
            {    third=second;
                second=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest&&arr[i]>second)
            {   third=second;
                second=arr[i];
            }
            else if(arr[i]>third)
            {
                  third=arr[i];
            }
        }
         
        return third;
        
 }
 int main()
 {
    int arr[]={12,13,1,10,34,16};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<thlarg(arr,size);
 }