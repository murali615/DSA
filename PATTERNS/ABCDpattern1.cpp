/*write a cpp prgram to print  abcd appterns
A
B B
C C C
D D D D
*/
#include<iostream>
using namespace std;
int main()
{
    int rows,cols,j,i;
    char ch='A';
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}