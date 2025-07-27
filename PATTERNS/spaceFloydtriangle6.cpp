// write a program for to print floydtriangle 
/*       1 2 3 4 5
           2 3 4 5
             3 4 5
               4 5 
                 5
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,space,i,j;
    cin>>rows>>cols;
    for(i=1;i<=rows;i++)
    {   int a=i;
        for(space=1;space<=i-1;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=rows-i+1;j++)
        {
            cout<<a++;
        }
        cout<<endl;
        
    }
}