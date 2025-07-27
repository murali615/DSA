// given string is palindrome or not;
#include<iostream>
using namespace std;
int main()
{
    string orgstr;
    getline(cin,orgstr);
    string revstr="";
    for(int i=0;i<orgstr.length();i++)
    {
        revstr=orgstr[i]+revstr;
    }
    if(revstr==orgstr)
    {
        cout<<"given string is palindrome";
    }
    else{
        cout<<"given string not palindrome";
    }
}