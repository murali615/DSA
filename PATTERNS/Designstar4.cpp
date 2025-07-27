/* write a cpp program for to print pattern
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
 */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,space,i,j;
    cin>>rows>>cols;
    for(i=1;i<=rows-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(space=1;space<=(rows*2)-(2*i);space++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for(i=0;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            cout<<"*";
        }
        for(space=1;space<=(rows-j)+i+1;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=rows-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}