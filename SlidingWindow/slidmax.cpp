// maxsub array using sliding window
// in compilation
//in this code you give array size first.after that enter
// array elements after that give sub array size.
//because i am giving inputs are diff format
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
    int subarray,sum=0,max=INT_MIN;
    cin>>subarray;
    int left=0,right=subarray-1;
    for(int i=0;i<subarray;i++)
    {
        sum=sum+arr[i];
    }
    while(right<n)
    {   
        if(sum>max)
        {
            max=sum;
        }
        right++;
        sum=(sum-arr[left])+arr[right];
        left++;
    }
    cout<<max<<"  is the max sub array";

 }