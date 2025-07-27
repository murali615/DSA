#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int N=3;
    vector<int> arr;
    for(int i=2;i<=20;i++)
    {   int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {  
                count++;
            }
        }
        if(count==2)
        {
            arr.push_back(i);
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        arr[i]=floor(pow(arr[i],2));
        cout<<arr[i]<<" "; 
    }
    for(int i=1;i<=arr.size();i++)
    {
        if(N==i+1)
        {
            cout<<endl<<arr[i];
        }
    }

}
