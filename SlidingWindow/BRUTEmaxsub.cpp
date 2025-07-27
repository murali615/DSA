// maximum sub array using BRUTE force
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int subarray=4;
    int max=INT_MIN;
    for(int i=0;i<(n-subarray)+1;i++)
    {    int sum=0;
         for(int j=i;j<subarray+i;j++)
         {
            sum=sum+arr[j];
         }
         if(sum>max)
         {
            max=sum;
         }
    }
    cout<<max;
  
 }