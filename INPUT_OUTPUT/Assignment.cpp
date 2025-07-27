#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    float principleamount,interest,timeperiod,totalinterest;
    cout<<"enter the principle amount:";
    cin>>principleamount;
    cout<<"enter the annual interest rate:";
    cin>>interest;
    cout<<"enter the time period in years:";
    cin>>timeperiod;
    totalinterest=(principleamount*timeperiod*interest)/100;
    cout<<fixed<<setprecision(2)<<"Mia will earn $"<<totalinterest<<" in interest";
    return 0;
}