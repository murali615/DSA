// write a program for to print floydtriangle 
/*     1
     2 2
   3 3 3
 4 4 4 4
5 5 5 5 5   */
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
                cout<<i;
            }
            cout<<endl;
    }
}