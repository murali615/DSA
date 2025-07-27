//given string is palindrme or not
#include<iostream>
using namespace std;
int main()
{
     string str;
     cin>>str;
     string str2="";
     for(int i=0;i<str.length();i++)
     {
         str2=str[i]+str2;
     }
     cout<<str2<<endl;
     if(str==str2)
     {
        cout<<"given string is palindrome";
     }
     else
     {
        cout<<"given string is not a palindrome";
     }
     return 0;
}