#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, str1 = "", str2 = "";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str1 = str1 + str[i];
        }
        else
        {
            str2 = ' ' + str1 + str2;
            str1 = "";
        }
    }
    cout <<str1+str2;
}
