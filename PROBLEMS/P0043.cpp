// to find given character count of a string
#include<iostream>
using namespace std;
int main()
{
    string str="gurrucodes";
    char ch;
    cin>>ch;
    int count=0;
    for(int i=1;i<=str.length();i++)
    {
          if(str[i]==ch)
          {
            count=count+1;
          }
    }
    cout<<ch<<" is "<<count<< " times repeated"<<" in the string"<<endl;


} 