#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int> arr={0,1,1,0,1,0,0};
    vector<int> arr1;
     /*for(int i=0;i<arr.size();i++)
     {
        for(int j=0;j<arr.size()-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {   
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     }*/
       for(int i=0;i<arr.size();i++)
       {
            if(arr[i]==0)
            {  
               arr.erase(arr.begin()+i,arr.begin()+i+1);
                i=i-1;
               arr.insert(arr.begin()+0,0);
            }
            else if(arr[i]==1)
            {
               arr.erase(arr.begin()+i,arr.begin()+i+1);
               arr.push_back(1);
            }
           
         }
         for(int i=0;i<arr.size();i++)
         {
            cout<<arr[i]<<" ";
         }
}