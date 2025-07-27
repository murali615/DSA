/* write a program for to print Rhombus pattern
  ******
   ******
    ******
     ****** 
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,space,i,j;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<i;space++)
        {
                cout<<" ";
        }  
        for(j=1;j<=rows;j++)
        {
            cout<<"*";
        }  
        cout<<endl;
    }
}