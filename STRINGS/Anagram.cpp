//check whether given string is anagram or not
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
      string str1,str2;
      getline(cin,str1);
      getline(cin,str2);
      int count=0;
        for(int i=0;i<str1.length();i++)
        {
            for(int j=i;j<str2.length();j++)
            {
                if(str1[i]==str2[i])
                {
                    count=count+1;
                    break;

                }
            }
        }
     if(count==str1.length())
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }

 }