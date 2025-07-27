#include<iostream>
using namespace std;
void return1()
{
    cout<<"void return type"<<endl;
}
int return1(int x,int y)
{
    int power=1;
    for(int i=1;i<=y;i++)
    {
        power=power*x;
    }
    cout<<"int return type"<<endl;
    return power;
}
string return2()
{
    cout<<"string return type"<<endl;
    return "Gurru code";
}
int main()
{
    cout<<"before function"<<endl;
    return1();
    cout<<return1(2,3)<<endl;
    cout<<return2()<<endl;
    cout<<"After function"<<endl;
}