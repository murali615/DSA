#include<iostream>
using namespace std;
int main()
{
    int a=0;
    while(a<10)
    {   
        a++;
        if(a==5)
        {
              //a++;
            continue;
            
        }
       // a++;
        cout<<a<<endl;
        
    }
}