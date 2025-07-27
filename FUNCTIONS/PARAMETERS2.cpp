#include<iostream>
using namespace std;
void isprime(int x)
{   int count=0;
   for(int i=1;i<=x;i++)
   {  
       if(x%i==0)
       {
         count=count+1;
       }
    }
    if(count==2)
    {
        cout<<x <<"is a prime"<<endl;
    }
    else 
    {
        cout<<x <<"is not a prime"<<endl;
    }
}
int main()
{
    cout<<"Before function:"<<endl;
    isprime(3);
    cout<<"After function:"<<endl;
    return 0;
}
