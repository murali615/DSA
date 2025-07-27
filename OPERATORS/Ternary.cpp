#include<iostream>
using namespace std;
int main()
{
    int a,b,age;
    string vote;
    cout<<"entern a value:"<<endl;
    cin>>a;
    cout<<"enter b value:"<<endl;
    cin>>b;
    cout<<((a>=b)? true:false)<<endl;
    cout<<"enter age:"<<endl;
    cin>>age;
    vote=(age>=18)?"eligible":"not eligible";//using variable vote
    cout<<vote;
   
}