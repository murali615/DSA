//reverese of a string
#include<iostream>
using namespace std;
int main()
{
    string str="gurru codes";
    string str2="";
   //string str3="";
    for(int i=0;i<=str.length();i++)
    {
        str2=str[i]+str2;
    }
    cout<<str2<<endl;
    /*for(int i=str.length();i>=0;i--)
    {
        str3=str3+str[i];
    }
    cout<<str3;*/
    // when we use swapping logic for reverseing the iterate the loop by half
}