#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i=1;
    cin>>n;
    while(n)
    {   
        
        sum=sum+i;
        i++;
        n--;
    }
    cout<<sum<<endl;
}