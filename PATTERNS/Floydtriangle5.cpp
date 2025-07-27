/*
5
45
345
2345
12345
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j;
    cin>>rows>>cols;
    
    for(i=1;i<=rows;i++)
    {   
        int a=rows-i;
        ++a;
        for(j=1;j<=i;j++)
        {
            cout<<a++;  
        }
        cout<<endl;
    }
}