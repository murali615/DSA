/*
     *
    * *
   *   *
  * * * *   
   *   *
    * *
     * 
     
*/
#include<iostream>
using namespace std;
int main()
 {
    int rows,cols,i,j,space;
    cin>>rows>>cols;
    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                cout<<"* ";
            }
            else
            {
               cout<<"  ";
            }
            
        }
        cout<<endl;
    }
   for(i=1;i<=rows+1;i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=i;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=((rows*2)-(rows+i))+1;j++)
        {
            if(j==1||j==(rows*2)-(rows+i)+1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
    
 }