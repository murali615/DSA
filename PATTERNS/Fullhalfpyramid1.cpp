/* write a  cpp program for to print followin gpattern
*
**
***
****
*****
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j;
    cin>>rows>>cols;
    for(i=1;i<=rows-1;i++)
    {

        for(j=1;j<=i;j++)
        {
            cout<<"*";
        } 
        cout<<endl;
    }
    for(i=1;i<=rows;i++)
    {

        for(j=1;j<=rows-i+1;j++)
        {
            cout<<"*";
        } 
        cout<<endl;
    }
}




      
         

                             