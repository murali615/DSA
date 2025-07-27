//write a function that reverse a given string
#include<iostream>
using namespace std;
string stringstr(string str,string str1="")
{   
     for(int i=0;i<=str.length();i++)
     {
             str1=str[i]+str1;
     }
     return str1;

}
int main()
{
     string str;
     cin>>str;
     string a=stringstr(str);
     cout<<a;
    
}