#include<iostream>
using namespace std;
int main()
{
    int candies,friends;
    cin>>candies>>friends;
    if(candies%friends==0 && (candies/friends)%2==0)
    {
        cout<<"yes";
    }
    else 
    {
        cout<<"no";
    }
    return 0;
    

}