//to find the given charcater of its position
#include<iostream>
using namespace std;
int main()
{
    string str="gurrucodes"; 
    char ch='c';
    cin>>ch;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]==ch)
        {
            cout<<i<<endl;
            break;
        }
   }
}