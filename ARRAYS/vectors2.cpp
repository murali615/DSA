//vectors using strings
#include<bits/stdc++.h>
using namespace std;
 int main()
 {    
      vector<string> smarks01={"murali","krihsna","ayyappa","nani"};
      for(int i=0;i<smarks01.size();i++)
      {
          cout<<smarks01[i]<<" ";
      }
      cout<<endl;
      vector<string> smarks02({"murali","krihsna","ayyappa","nani"});
      for(int i=0;i<smarks02.size();i++)
      {
          cout<<smarks02[i]<<" ";
      }
      cout<<endl;
      vector<string> smarks03(5,"murali");
      for(int i=0;i<smarks03.size();i++)
      {
          cout<<smarks03[i]<<" ";
      }
}