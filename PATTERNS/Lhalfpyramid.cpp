// write a program for to print *'s as Lefthalf pyramid 
/* 
    *
   **
  ***
 ****
***** 
 //NOTE:-when rows!=cols then use higest value in space loop.
 otherwise use any value
FOR EX:-1.rows=5
         cols=4  then use rows-i.
FOR EX:-2.rows=4
         cols=5  then use cols-i.
  */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,space,i,j;
    cin>>rows>>cols;
    for(i=1;i<=rows;i++)
    { 
            for(space=1;space<=rows-i;space++)
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