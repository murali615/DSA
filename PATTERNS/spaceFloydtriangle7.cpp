/* write a cpp program for to print 
       1
     2 3 2
   3 4 5 4 3
 4 5 6 7 6 5 4
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,space,k;
    cin>>rows;
    for(i=0;i<rows-1;i++)
    {   
        int a=i+1;
        for(space=1;space<=rows-i+1;space++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<a++;
        } 
         --a;
         for(k=1;k<=j-1;k++)
        {   
            cout<<--a;
        }
       
        cout<<endl;
    }
}