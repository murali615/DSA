// print digits of a number
#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    cin>>n;
    while(n)
    {
         digit=n%10; //it give once place value 243%10=3 //24%10=4
         cout<<digit<<endl;  //3
         n=n/10;            // 243/10=24 // 24/10=0
                            
    }
}