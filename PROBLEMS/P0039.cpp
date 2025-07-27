//fabinocci series
#include<iostream>
using namespace std;
int main()
{
    int second=1,first=0,n,phiN;
    cin>>n;
    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    while(n)
    {   
        cout<<first<<endl; //
        phiN=first+second; //0+1=1
        first=second;     // 0=1;
        second=phiN;
        n--;
    }
    
}