#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    cout<<"print i to n numbers:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
    cout<<"print n to i numbers:"<<endl;
    for(i=1;i<=n;n--)
    {
        cout<<n<<endl;
    }
    cout<<"print n to i numbers:"<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<(5-i+1)<<endl;
    }
}