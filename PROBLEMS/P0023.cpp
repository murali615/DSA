//For a given integer N, print all the squares of integer numbers where the square is less than or equal to N, in ascending order
#include<iostream>
using namespace std;
int main()
{
    int N,t;
    cin>>N>>t;
    while(t*t<=N)
    {
        cout<<t*t<<endl;
        t++;
    }
    return 0;

}