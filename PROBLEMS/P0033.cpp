#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	int x,y,z,t,s,totaltime;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(x<=3)
	    {   
	        totaltime=x*y;
	        cout<<totaltime<<endl;
	    }
	    else
	    {
	             if((y%3)==0)
	             {
	           
	                s=floor((float)x/3);
	                cout<<s;
	                x=(x*y)+((s-1)*z);
	                 cout<<x<<endl;
	               
	             }
	             else
	             {  
	                 s=floor((float)x/3);
	                 
	                 x=(x*y)+s*z;
	                cout<<x<<endl;
	             }
	        
	    }
	}
	

}
