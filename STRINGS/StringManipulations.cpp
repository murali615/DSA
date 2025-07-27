// diff string manipulations
#include<iostream>
using namespace std;
int main()
{
    string str="gurucodes";
    string str2="welcome";
    cout<<str.length()<<endl;
    cout<<str[1]<<endl;
    str="hello"+str;
    cout<<str<<endl;
    cout<<str.append("welcome")<<endl;
    if(str==str2)
    {
        cout<<"Macthed"<<endl;
    }
    else
    {
        cout<<"Not Matched"<<endl;
    }
    if(str.compare(str2)==0)
    {
        cout<<"Both Strings Are Matched"<<endl;
    }
    else
    {
        cout<<"Both Strings Are Not Matched"<<endl;
    }
    cout<<str.insert(5," ")<<endl;
    cout<<str.insert(15," ")<<endl;
    cout<<str.substr(6,17)<<endl;
    if(str2.find("come")!=str2.npos)
    {
        cout<<"yes"<<endl;
    }
    str.erase(2,5);
    cout<<str<<endl;
    str.replace(0,5,"hello guru");
    cout<<str<<endl;
    str.erase(14,1);
    cout<<str;
   
    
}