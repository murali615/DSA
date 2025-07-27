/* 
******
*    *
*    *
*    *
******
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,spaces;
    cin>>rows>>cols;
    for(i=1;i<=cols;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(i=1;i<=rows-2;i++)
    {
        for(j=1;j<=1;j++)
        {
            cout<<"*";
        }
        for(spaces=1;spaces<=cols-2;spaces++)
        {
            cout<<" ";
        }
        for(j=1;j<=1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(i=1;i<=cols;i++)
    {
        cout<<"*";
    }
   

}