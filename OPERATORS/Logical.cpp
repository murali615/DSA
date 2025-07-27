#include<iostream>
using namespace std;
int main()
{
   /* bool a=true;
    bool b=false;
    cout<<(a&&b)<<endl;
    cout<<(a||b)<<endl;
    cout<<!(a)<<endl;*/
    float a,b;
    a=4.5;
    b=8.5;
    cout<<"logical &&:"<<(a<=b&&b>=a)<<endl;
    cout<<"logical ||:"<<(b<=a||a<=b)<<endl;
    cout<<"logical !:"<<!(a<=b&&a>=b)<<endl;
    cout<<endl;
    cout<<"logical &&:"<<(a<=b&&b<=a)<<endl;
    cout<<"logical ||:"<<(b<=a||a>=b)<<endl;
    cout<<"logical !:"<<!(a<=b&&b>=a)<<endl;
    cout<<endl ;
    cout<<"logical &&:"<<(a<=b&&b>=a)<<endl;
    cout<<"logical ||:"<<(b<=a||a>=b)<<endl;
    cout<<"logical !:"<<!(a<=b&&a>=b)<<endl;
    cout<<endl;
    cout<<"logical &&:"<<(a<=b&&b>=a)<<endl;
    cout<<"logical ||:"<<(b<=a||a<=b)<<endl;
    cout<<"logical !:"<<!(a<=b&&b>=b)<<endl;
    cout<<endl;
    cout<<"logical &&:"<<(a<=b&&b<=a)<<endl;
    cout<<"logical ||:"<<(b>=a||a<=b)<<endl;
    cout<<"logical !:"<<!(a<=b&&a>=b)<<endl;
    return 0;
}