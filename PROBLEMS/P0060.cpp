#include<iostream>
using namespace std;
int main()
{   
    string str="gurru.codes.hppp";
    string str2="";
    string temp="";
    for(int i=0;i<str.length();i++)
        {
            if(str[i]!='.')
            {
                 str2=str2+str[i];
            }
          else
            {
               str2='.'+str2;
               temp=str2+temp;
               str2="";
           }
        }
        cout<<str2+temp;
}