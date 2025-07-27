#include<iostream>
using namespace std;
int scope(int x,int y)
{     
      x=10;
      y=20;
      cout<<x<<y<<endl;
     // cout<<x<<y; it gives an error beacuse these varibles are not in the scope.
}
int main()
{   int x=5,y=10;
    scope(x,y);
    cout<<x<<y;
    return 0;
   //cout<<p<<q; it gives an error beacuse these varibles are not in the scope.
}