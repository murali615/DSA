// write a program for to print floydtriangle 
/*       5 4 3 2 1 
           4 3 2 1
             3 2 1
               2 1
                 1
    */
   #include<iostream>
   using namespace std;
   int main()
   {
      int rows,cols,space,i,j;
      cin>>rows>>cols;
      for(i=1;i<=rows;i++)
      {     int a=rows-i;
            ++a;
           for(space=1;space<i;space++)
           {
                 cout<<" ";
           }
           for(j=1;j<=rows-i+1;j++)
           {
                 cout<<a--;
           }
           cout<<endl;
           
      }
   }