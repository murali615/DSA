#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int count=0;
       for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<t.length();j++)
            {
                if(s[i]==t[j])
                 {
                    count=count+1;
                 }
            }
             cout<<count;
        }
}