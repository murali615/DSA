#include<iostream>
using namespace std;
int main()
{
    string str1="leetcode";
    string str2="cod";
     int k;
    for(int i=0;i<str1.length();i++)
    {
       for(int j=0;j<str2.length();j++)
       {
      
          if(str1[i]==str2[j])
         {
           k=0;
         }
         else{
            k=-1;

          }
      
       }
    }
    cout<<k;
}