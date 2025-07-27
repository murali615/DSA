#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,t,rev;
	cin>>t;
	while(t--)
	{    int rev=0;

        cin>>n;
	    while(n)
	    {
	        rev=n%10+(rev*10);
	        
	        n=n/10;
	    }
		cout<<rev;
	    
	}
}
