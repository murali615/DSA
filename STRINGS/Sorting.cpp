// perfom sorting on string either Assecending order or Dec... based in Ascii 
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str="gurr./\n/ucode";
     //sort(str.begin(),str.end());//Assending order
     sort(str.begin(),str.end(),greater<char>());
     cout<<str;
}