//min of three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
   // cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if((a<b)&&(a<c))
    {
        cout<<a<<endl;
    }
    else if(b<c)
    {
        cout<<b;
    }
    else{
        cout<<c;
    }
}