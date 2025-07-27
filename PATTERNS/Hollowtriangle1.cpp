/* 
    * * * * *
     *     *
      *   *
       * * 
        *     
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j,space;
    cin>>rows;
    for(i=1;i<=rows;i++)
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
        for(j=1;j<=((rows*2)-(rows+i));j++)
        {
            if(j==1||j==((rows*2)-(rows+i))) 
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