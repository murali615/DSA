//convert every word of string starting letter into upper case
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if((i==0)&&str[i]>=97&&str[i]<=122)
        {
             str[i]=str[i]-32;
        }
        else if((i==0)&&str[i]>=65&&str[i]<=90)
        {
             str[i]=str[i];
        }
        else if(str[i-1]==' '&&(str[i]>=97&&str[i]<=122))
        {
                str[i]=str[i]-32;
        }
         else if(str[i-1]==' '&&(str[i]>=65&&str[i]<=90))
        {
                str[i]=str[i];
        }
        else if(str[i]>=65&&str[i]<=90)
        {
              str[i]=str[i]+32;
        }
        
        
      
    }
    cout<<str;

}