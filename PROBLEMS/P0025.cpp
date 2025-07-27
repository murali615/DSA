// print even numbers from 1 to 100
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a<=100)
    {
        if(a%2==0)
        {
            cout<<a<<endl;
        }
        a++;
    }
}