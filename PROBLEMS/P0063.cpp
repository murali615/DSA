#include<iostream>
using namespace std;
int main()
{   
     string num;
     getline(cin,num);
     int a=0;
    for(int i=0;i<num.length();i++)
    {   char ch=num[i];
        a=ch-('0')+a;
    }
    if(a%7==0)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
        
}
