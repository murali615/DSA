#include<bits/stdc++.h>
using namespace std;
 int main()
 {  
     int n,count=0;
     cin>>n;
     vector<string> str(n);
     vector<int> str1;
     for(int i=0;i<str.size();i++)
     {
        cin>>str[i];
     }
     for(int i=0;i<str.size();i++)
     {     count=0;
        for(int j=0;j<str.size();j++)
        {
            if(str[i]==str[j]&&i!=j)
            {
                count++;
                str.erase(str.begin()+j,str.begin()+j+1);
                j=j-1;
            }
        }
        str1.push_back(count+1);
     }
     cout<<str.size()<<endl;
     for(int i=0;i<str1.size();i++)
     {
        cout<<str1[i]<<" ";
     }
     cout<<"\n unique elements are : "<<str1.size();
     


 }