// power of x and y
#include<iostream>
using namespace std;
int main()
{
    int x,y,power=1;
    cin>>x>>y;  // 2 3
    while(y--)     //3 //2 //1
    {
        power=power*x; // 1*2 =2 // 2*2=4 //4*2=8
    }
    cout<<power<<endl; //8

    return 0;
}