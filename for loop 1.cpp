#include<iostream>
using namespace std;

int main()
{
           int i,j,k,n,m,a;
           cout<< "give n:"<<endl;
           cin>>n;
           a=2*n;
           for(i=2;i<=a;i=i+2)
           {
                      for(k=0;k<=a-i;k=k+2)
                      {
                                 cout<<" ";
                      }
                      for(j=1;j<=i;j++)
                      {
                                 cout<<"*";
                      }
                      cout<<endl;
                      for(k=0;k<=a-i;k=k+2)
                      {
                                 cout<<" ";
                      }
                      for(j=1;j<=i;j++)
                      {
                                 cout<<"*";
                      }
                      cout<<endl;


           }
           return 0;
}
