#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,x,n,res1,res2;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        /*n=ceil((float)n/6);
        n=n*x;
        cout<<n;*/
    if(n%6==0)
    {	
        res1=n/6*x;
        cout<<res1<<endl;
    }
    else
    {
       res2=(n/6+1)*x;
       cout<<res2<<endl;
	}
    }
}
