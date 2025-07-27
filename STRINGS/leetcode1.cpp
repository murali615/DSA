// display first index occurence of a string
#include<iostream>
using namespace std; 
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    if(str1.substr(0,str2.length())==str2)
    {
        cout<<"0";     
    }  
    else
    {
        cout<<"-1";
    }
}
