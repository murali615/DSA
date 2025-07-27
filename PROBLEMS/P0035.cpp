// write a program from to print rev of a number
#include<iostream>
using namespace std;
int main()
{
    int rev=0,rem,n;
    cin>>n;
    while(n)          //243
    {
        rem=n%10;       //3  //4 //2
        rev=(rev*10)+rem; //(0*10)+3=3 //(3*10)+4=34 //(34*10)+2=342 
        n=n/10;       //24  //2 //0
    }
    cout<<rev;
    
}