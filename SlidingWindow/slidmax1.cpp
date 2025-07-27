// sum ==target
// using variable sliding window techinque
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
    int left=0,right=0;
    int sum=0,target=12;
    int cur_sum=arr[0];
    while(right<n)
    {   
        if(cur_sum==target)
        {
            cout<<"exist";
            return 0;
        }
        else if(cur_sum<target)
        {
            right++;
            cur_sum=cur_sum+arr[right];
        }
        else if(cur_sum>target)
        {
            cur_sum=cur_sum-arr[left];
            left++;
        }
    }
    if(cur_sum!=target)
    {
        cout<<"target is not exits";
    }
   

 }