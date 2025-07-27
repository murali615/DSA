//write a function for to count vowels in a string
#include<iostream>
using namespace std;
int stringstr(string str,int count=0)
{
    //int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
        {
            count=count+1;
        }
    }
    return count;
}
int main()
{
    string str;
    cin>>str;
    cout<<stringstr(str)<<" vowels in a string";
}
