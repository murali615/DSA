/* write a program for to print 
* * * * *
 * * * *
  * * *
   * *
    * 
    * 
   * *
  * * *
 * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,j,i,space;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<i;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=rows-i+1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<rows-i+1;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}