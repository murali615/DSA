#include<iostream>
using namespace std;
int main()
{
    int m1,res;
    cout<<"enter persons m1 marks:"<<endl;
    cin>>m1;
    if(m1>80)
    {
       cout<<"A+ garde";
    }
    else if((m1>70)&&(m1<=80))
    {
        cout<<"A garde";
    }
    else if((m1>60)&&(m1<=70))
    {
        cout<<"B garde";
    }
    else if((m1>50)&&(m1<=60))
    {
        cout<<"C garde";
    }
     else if((m1>45)&&(m1<=50))
    {
        cout<<"D garde";
    }
      else if((m1>=35)&&(m1<=45))
    {
        cout<<"E garde";
    }
        
}


