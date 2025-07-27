//By using two input method to read and to print String
#include<iostream>
using namespace std;
int main()
{
    string str1,str2,str3,str4;
    cin>>str1>>str2;
    cout<<str1<<str2<<endl;
    getline(cin,str3);
    cout<<str3<<endl;
    getline(cin,str4);
    cout<<str4;
}
    
 