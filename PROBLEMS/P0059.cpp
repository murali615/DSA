// no of ratations
/*
gurrucodes ---->2 rotations
output--->esgurrucod
*/
#include <iostream>
using namespace std;
int main()
{
    string str = "gurrucodes";
    int NOR;
    cin >> NOR;
    string str2 = str.substr(str.length() - NOR, str.length()) + str.substr(0, str.length() - NOR);
    cout << str2;
}