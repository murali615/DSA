 /*write c++ program with these condition:
 1.print "Arithematic operations"
 2.a.Addition
   b.Subtraction
   c.Multiplication
   d.Division
 3.print select any option from above
 4.print enter two integer numbers:
 5.print option statement with answer*/
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    char opt;
    int a,b;
    float g;
    cout<<"Arithematic operations:"<<endl;
    cout<<"a.Addition"<<endl;
    cout<<"b.Subtraction"<<endl;
    cout<<"c.multiplication"<<endl;
    cout<<"d.Divsion"<<endl;
    cout<<"select any option from the above to perform Arithematic Operations: ";
    cin>>opt;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    if(opt=='a')
    {
        cout<<"Addition is:"<<a+b<<endl;
    }
    if(opt=='b')
    {
        cout<<"Subtraction is :"<<a-b<<endl;
    }
    if(opt=='c')
    {
        cout<<"Multiplication is:"<<a*b<<endl;
    }
    if(opt=='d')
    {
        cout<<fixed<<setprecision(1)<<"a.Division is:"<<(g=(float)a/b)<<endl;
    }
    return 0;
 }
