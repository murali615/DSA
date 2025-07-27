//vectors buitin functions
#include<bits/stdc++.h>
using namespace std;
 int main()
 {    int n;
      cin>>n;
      vector<int> num(n);
       for(int i=0;i<n;i++)
      {
          cin>>num[i];
      }
      cout<<num.capacity()<<endl;
      cout<<endl;
      for(int i=0;i<num.size();i++)
      {
          cout<<num[i]<<" ";
      }
      cout<<endl;
      num.push_back(70);
      num.insert(num.begin()+1,20);
      for(int i=0;i<num.size();i++)
      {
          cout<<num[i]<<" ";
          num.erase(num.begin()+i,num.begin()+i);
      }
     cout<<num.capacity()<<endl;
     cout<<endl;
     num.pop_back();
     num.erase(num.begin()+3,num.begin()+3+1);
      num.erase(num.begin()+1,num.begin()+1);
     for(int i=0;i<num.size();i++)
      {
          cout<<num[i]<<" ";
      }

 }