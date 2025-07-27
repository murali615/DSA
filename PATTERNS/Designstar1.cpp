//write a program for to print Right half pyramid
/*  **********
    ****  ****
    ***    ***
    **      **
    *        *
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,space;
    cin>>rows>>cols;
    for(i=0;i<rows;i++)
    {   
        
         for(j=0;j<rows-i;j++)
         {
                 cout<<"*";
                 
         }
        
        for(space=1;space<(rows-j)+i+1;space++) //5-5=0 // 5-4=1...
        {
               cout<<" ";
        }
          for(j=1;j<=rows-i;j++)
        {
                 cout<<"*";
        }
        
   
        cout<<endl;
  }
}


