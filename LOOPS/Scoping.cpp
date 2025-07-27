#include<iostream>
using namespace std;
int main()
{
    int a=1;
    while(a<=3)
    {
        int b=10;
        cout<<a<<endl; //global variable
        cout<<b<<endl; //local variable
        a++;
        b++;
    }
   // cout<<b<<endl;//it gives an error
}