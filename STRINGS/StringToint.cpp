//converting string to a int or long or float etc.. using stoi: only for valid string
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str); //give valid string like "1234","45"..
    float a=stoull(str);// use diff datatypes
    cout<<a;

}