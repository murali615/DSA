#include<iostream>
using namespace std;
int main()
{

    int lily_jar,max_jar;
    string s;
    cout<<"Intial:"<<endl<<"Lily's jar:";
    cin>>lily_jar>>s;
    //cout<<"cookies"<<endl;
    cout<<"Max's jar:";
    cin>>max_jar>>s;
   // cout<<"cookies"<<endl;
    max_jar= lily_jar+ max_jar;
    lily_jar=max_jar-lily_jar;
    max_jar=max_jar-lily_jar;
    cout<<"After swapping:"<<endl<<"Lily's jar: "<<lily_jar<<" cookies"<<endl;
    cout<<"Max's jar: "<<max_jar<<" cookies";
    return 0;

}