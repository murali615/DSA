// find largest length for max sub array

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
    int left=0,right=0,diff=0,max=INT_MIN;
    int cur_sum=arr[0];
    int target=12;
    while(right<n)
    {   
        if(cur_sum==target)
        {
            diff=right-left+1;
            if(diff>max)
            {
                max=diff;
            }
           cur_sum=cur_sum-arr[left];
           left++;
        }
        else if(cur_sum<target)
        {    right++;
            cur_sum=cur_sum+arr[right];
        }
        else if(cur_sum>target)
        {
            cur_sum=cur_sum-arr[left];
            left++;
        }
    }
    cout<<max;
   

 }

