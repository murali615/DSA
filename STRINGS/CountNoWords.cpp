// count no words in a sentence
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]==' ')
        {
            count=count+1;
        }
    }
    cout<<"there are "<<count+1<<" no of words in a sentence"<<endl;
}