
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int count=0,count1=0;
    for(int i=0;i<str.length();i++)
    {
         count=0;
        if(str[i]&&str[i+1]=='o')
        {
            count=count+1;
        }
       if(count>count1)
       {
          count1=count;
       }
       else{
            count=count;
       }
      
     }
     if(count>count1)
       {
          cout<<count1;
       }
       else{
            cout<<count;
       }
    
}