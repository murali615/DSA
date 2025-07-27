#include<iostream>
using namespace std;
void printB();
void printA()
{   
  cout<<"AAA"<<endl;
}

int main()
{
   printA();
    printB();
    return 0;
}
void printB()
{
    cout<<"BBB"<<endl;
}