// write a program for to print floydtriangle 
/*       1
       2 1
     3 2 1
   4 3 2 1
 5 4 3 2 1   */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,space;
    cin>>rows>>cols;
    for(i=1;i<=rows;i++)
    {   int a=i;
        for(space=1;space<=rows-i;space++)
        {
                cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<a--;  
        }
        cout<<endl;
    }
}