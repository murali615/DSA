// print words from a string seperatly
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
        if(str[i]==' ')
        {
            cout<<endl;
        }
    }
}