//converting integer to string using builtin function (to_string()) 
#include<iostream>
using namespace std;
int main()
{  
    int a=10;
    string str="ten";
    //str=str+a;  this line gives an error
    string str1=to_string(a);
    str=str+str1;
    cout<<str;

}