//write a function for given string is palindrome or  not
#include<iostream>
using namespace std;
string stringstr(string str1,string str2="")
{
    for(int i=0;i<str1.length();i++)
    {
          str2=str1[i]+str2;
    }
    return str2;
}
int main()
{
    string str1;
    cin>>str1;
    if(stringstr(str1)==str1) //calling and check return result
    {
        cout<<"given string is palindrome";
    }
    else
    {
        cout<<"given string is not palindrome";
    }
    return 0;

}