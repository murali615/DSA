#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,count,i=1;
    count=i;
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
       cout<<(count=i+2);
    }
    else if(a==b||b==c||a==c)
    {
       cout<<(count=i+1);
    }
    else{
      cout<<count;
    }
    return 0;

} 
