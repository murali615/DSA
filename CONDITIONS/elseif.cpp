#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age: "<<endl;
    cin>>age;
    if(age<13)
    {
        cout<<"he is a todler";
    }
    else if((age>=13)&&(age<=19))
    {
        cout<<"he is teenager";
    }
    else if((age>=18)&&(age<=60))
    {
        cout<<"he is adult";
    }
    else if(age>60)
        cout<<"he is senior citizen";
}

