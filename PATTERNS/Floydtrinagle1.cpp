// write a program for to print floydtriangle 
/*  1
    2 3
    4 5 6
    7 8 9 10
  */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,a=1;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<a++;
        }
        cout<<endl;
    }
}