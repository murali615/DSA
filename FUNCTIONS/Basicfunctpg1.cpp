#include<iostream>
using namespace std;
void printB()
{
    cout<<"BBB"<<endl;
}
void printA()
{   
    printB();
    
    cout<<"AAA"<<endl;
}

int main()
{
    printA();
    return 0;
}