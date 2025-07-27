//write a program for to print Right half pyramid
/*  *        *
    **      **
    ***    ***
    ****  ****
    **********  */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,space;
    cin>>rows>>cols;
    for(i=1;i<=rows;i++)
    {   
         for(j=1;j<=i;j++)
         {
                 cout<<"*";
         }
        for(space=1;space<=(2*rows)-(2*i);space++)
        {
               cout<<" ";
        } 
        for(j=1;j<=i;j++)
        {
                 cout<<"*";
        }
   
    cout<<endl;
  }
}

