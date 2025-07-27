//convert number to word
#include<iostream>
using namespace std;
int main()
{
    int num,sep=0,rev=0;
    cin>>num;
    while(num)
    {
        sep=(num%10);
        rev=(rev*10)+sep;
        num=num/10;
    }
    while(rev)
    {
       sep=rev%10;
       rev=rev/10;
       switch(sep)
        {
            case 0:
                   cout<<"zero ";
                   break;
            case 1:
                  cout<<"one ";
                  break;
            case 2:
                   cout<<"two ";
                   break;
            case 3:
                  cout<<"three ";
                  break;
            case 4:
                   cout<<"four ";
                   break;
            case 5:
                  cout<<"five ";
                  break;
            case 6:
                   cout<<"six ";
                   break;
            case 7:
                  cout<<"seven ";
                  break;
            case 8:
                   cout<<"eight ";
                   break;
            case 9:
                  cout<<"nine ";
                  break;
        }
         
    }
}