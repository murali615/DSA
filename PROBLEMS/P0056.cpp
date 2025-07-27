// print words in string line by line using temp variable
#include<iostream>
using namespace std;
 int main()
 {
    string str;
    getline(cin,str);
    string tempstr="";
    for(int i=0;i<str.length();i++)
    {
        tempstr=tempstr+str[i];
        if(str[i]==' ')
        {
            cout<<tempstr<<endl;
            tempstr="";
        }
    }
    cout<<tempstr;
 }