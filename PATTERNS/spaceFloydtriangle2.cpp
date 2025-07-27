// write a program for to print floydtriangle 
/*   
       1
      12
     123
    1234
   12345  */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,space;
    cin>>rows>>cols;
    for(i=1;i<=rows;i++)
    {   
        for(space=1;space<=rows-i;space++)
        {
                cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}