#include<iostream>
using namespace std;
int main()
{   
    char ch,ch1;
    cin>>ch;
    ch1=ch;
    int rows,cols,k,count=0;
    cin>>rows>>cols;
    for(int i=0;i<=rows/2;i++)
    {      ch=ch1;
        for(int spaces=0;spaces<rows-i-1;spaces++)
        {    if(i==(rows/2)-1)
            {
                count++;
            }
            cout<<"--";
        }
        for(k=0;k<=i;k++)
        {   
            cout<<ch--<<"-";
        }
        ch++;
        for(int j=0;j<k-1;j++)
        {    ch++;
            cout<<ch<<"-";
        }
        for(int spaces=0;spaces<rows-i-1;spaces++)
        {
            cout<<"--";
        }
        cout<<endl;
    }
    for(int i=1;i<=rows/2;i++)
    {      ch=ch1;
        for(int spaces=0;spaces<count+i-1;spaces++)
        {
            cout<<"--";
        }
        for(k=0;k<=(rows/2)-i;k++)
        {   
            cout<<ch--<<"-";
        }
        ch++;
        for(int j=0;j<k-1;j++)
        {    ch++;
            cout<<ch<<"-";
        }
        for(int spaces=0;spaces<count+i-1;spaces++)
        {
            cout<<"--";
        }
        cout<<endl;
    }
}
