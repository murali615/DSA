#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b&&b<=c) //
    {
        cout<<"b";
    }
    else if(a>=b&&a<=c||a<=b&&a>=c)
    {
        cout<<"a";
    }
    else{
        cout<<"c";
    }
}