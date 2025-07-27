// write a program for to print InvertedRhalfpyramid pattern
/*  *****
    ****
    ***
    **
    *   */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j;
    cin>>rows>>cols;
    for(i=0;i<rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}