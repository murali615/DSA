// write a program for to print floydtriangle 
/*         1
         2 3
       4 5 6
     7 8 9 10
11 12 13 14 15    */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,space,a=1;
    cin>>rows>>cols;
    for(i=1;i<=rows;i++)
    {
          for(space=1;space<=rows-i;space++)
            {
                    cout<<" ";
            }
            for(j=1;j<=i;j++)
            {
                cout<<a++;
            }
            cout<<endl;
    }
}