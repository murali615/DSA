// check whether given string is palindrome or not using function.
// and swapping
#include<iostream>
using namespace std;
string palindrome(string str1)
{
    
    for(int i=0;i<str1.length()/2;i++)
    {
         char temp=str1[i];
         str1[i]=str1[str1.length()-1-i];
         str1[str1.length()-1-i]=temp;
    }
    return str1;
}
int main()
{
    string str;
    getline(cin,str);
    string str2=palindrome(str);
    if(str==str2)
    {
        cout<<"given string is palindrome"<<endl;
    }
    else
    {
        cout<<"given string not a palindrome"<<endl;
    }
    return 0;
}