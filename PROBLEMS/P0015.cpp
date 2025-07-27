/* write a c program 
input:2004
output:2004 is leapyear 
input:2003
output:not a leapyear*/

#include<iostream>
using namespace std;
int main()
{
   int year;
   cout<<"enter the year:";
   cin>>year;
   if((year%4==0||year%400==0)&&(!year%100==0))
   {
      cout<<year<<" is a leap year"<<endl;
   }
   else
   {
      cout<<year<<" not a leap year";
   }
   

return 0;

}