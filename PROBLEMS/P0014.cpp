#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,count,i=1;
    count=i;
    cin>>a>>b>>c;
    if(a==b||b==c||a==c)
    {
        count=i+1;
    }
    if(a==b&&b==c)
    {
       count=i+2;
    }
    cout<<"max no of eql numbers is count:"<<count;
    return 0;

} 
