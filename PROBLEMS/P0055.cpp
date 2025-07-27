// write a cpp prgram for to find the sum of integ..between 1 and 200
// that are multiple by 7.
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<=200;i++)
    {
        if(i%7==0)
        {
        sum=sum+i;
        }
    }
    cout<<sum;
}