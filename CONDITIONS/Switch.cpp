#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a)
    {
        case 35:
                cout<<"just pass"<<endl;
                break;
        case 50:
                cout<<"B grade"<<endl;
                break;
        case 80:
                cout<<"A grade"<<endl;
                break;
        case 100:
                cout<<"A+ grade"<<endl;
                break;
        default :
                cout<<"enter valid marks:"<<endl;
    }
}