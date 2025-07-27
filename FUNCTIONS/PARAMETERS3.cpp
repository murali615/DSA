#include<iostream>
using namespace std;
void sumOfNnum(int num)
{
     int sum=0;
     for(int i=1;i<=num;i++)
     {
        sum=sum+i;
     }
     cout<<sum<<endl;

}
int main()
{
    int num,val;
    cin>>num;
    sumOfNnum(num);
    
    
   // cout<<val;
}