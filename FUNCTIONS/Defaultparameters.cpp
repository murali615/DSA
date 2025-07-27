#include<iostream>
using namespace std;
int default1(int x=30,int y=20) //default values
{
    cout<<x<<" "<<y<<endl;
}
int main()
{
    default1(10); //when we dont pass any value it takes default value
                // when we pass value it will take only paasing value even default value is decalred
}
