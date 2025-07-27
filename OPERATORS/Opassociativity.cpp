#include<iostream>
using namespace std;
int main()
{
    cout<<100/10*20%7<<endl;//(((100/10)*20)%7)if all operators are in same priority then use associatibity.
    cout<<((100/(10*20))+7);//not need to use associativity
    return 0;
}
