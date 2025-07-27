// to find how many vowels are exists in a string
#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<=str.length();i++)
    {
         if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
         {
            count=count+1;
         }
    }
    cout<<"vowels count in a string is"<<count<<endl;


}
