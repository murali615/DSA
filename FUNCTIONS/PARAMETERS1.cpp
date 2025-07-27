#include<iostream>
using namespace std;
int even(int x)
{
    if(x%2==0)
    {
        cout<<"given num is even"<<endl;
    }
    else
    {
        cout<<"given num is not a even"<<endl;
    }

}
int main()
{
    //int a;
    //cin>>a;
    cout<<"Before function"<<endl;
    even(5); //even(a);
    cout<<"After function"<<endl;
}