//convert binary string to decimal string
// u can optimize in single loop
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string str;  //1010
    int power,a=0;
    string str2="";
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        str2=str[i]+str2;
    }
    cout<<str2<<endl;//0101
    for(int i=0;i<str2.length();i++)
    {
         power=pow(2,i);//1 2 4 8
         cout<<power<<" ";
         if(str2[i]=='1')
        {
            a=power+a; // 2 10
        }
    }    
    cout<<endl<<a;       
    

}
