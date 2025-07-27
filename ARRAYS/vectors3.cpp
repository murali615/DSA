//vectors buitin functions
#include<bits/stdc++.h>
using namespace std;
 int main()
 {    int n;
      cin>>n;
      vector<string> str(n);
       for(int i=0;i<n;i++)
      {
          cin>>str[i];
      }
      cout<<str.capacity()<<endl;
      cout<<endl;
      for(int i=0;i<str.size();i++)
      {
          cout<<str[i]<<" ";
            
      }
      cout<<endl;
      str.push_back("prakash");
      str.insert(str.begin()+2,"deva");
      for(int i=0;i<str.size();i++)
      {
          cout<<str[i]<<" ";
          
      }
      cout<<endl;
     cout<<str.capacity()<<endl;
     cout<<endl;
     str.pop_back();
     str.erase(str.begin()+1,str.begin()+1);
     for(int i=0;i<str.size();i++)
      {
          cout<<str[i]<<" ";
      }

 }