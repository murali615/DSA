// to reverse the vowels in a string
#include<iostream>
using namespace std;
int main()
{
    string str,str1="";
    getline(cin,str);
    cout<<str<<endl;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            str1=str[i]+str1;
        }
       
    }
    cout<<str1<<endl;
    int j=0;
    for(int i=0;i<str.length();i++)
    {
     if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
     {
            str[i]=str1[j];
            j++;
     }
    }
  cout<<str;
}