//write a program sum factorial of given number;
// find factorials of given numbers
#include<iostream>
using namespace std;
int main()
{
    int fact,n,t,i=1,sum=0;
    cin>>n;
    fact=1;
    while(i<=n)
    {  
        fact=i*fact; 
        sum=sum+fact;
        i++;          
    }             
    cout<<sum;
    return 0;
}                  
         
          
          
          
     

