// write a program for to print floydtriangle 
/*       5 4 3 2 1 
         4 3 2 1
         3 2 1
         2 1
         1
    */
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j;
    cin>>rows>>cols;
    
    for(i=0;i<=rows;i++)
    {   
     int a=rows-i;
        for(j=1;j<=(rows-i);j++)
        {
            cout<<a--;  
        }
        cout<<endl;
    }
}