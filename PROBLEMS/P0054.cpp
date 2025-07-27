// write a cpp prgram for to find the sum of all 
//the two digits num..which will exactly divisible by 9.
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=10;i<=99;i++)
    {
        if(i%9==0)
        {
        sum=sum+i;
        }
    }
    cout<<sum;
}