// print pattern like thiS
/*
A
b C
d E f
G h I j
*/
#include<iostream>
using namespace std;
int main()
{
     int rows,cols;
     cin>>rows>>cols;
     char ch='A';
     cout<<ch<<endl;
     for(int i=1;i<=rows-1;i++)
     {
        for(int j=1;j<=i+1;j++)
        {
            if(ch>=65&&ch<=90)
            {
                ch=ch+33;
                cout<<ch<<" ";
            }
            else
            {   ch=ch-31;
                cout<<ch<<" ";
            }
        }
        cout<<endl;
     }
}