#include<iostream>
using namespace std;
int main()
{
           int a,b,n;
           string c[9]={"one","two","three","four","five","six","seven","eight","nine"};
           cin>>a>>b;
           cout<<endl;
           for(n=a;n<=b;n++)
           {
                      if(n<=9)
                      {
                                 cout<<c[n-1]<<endl;
                      }
                      else if(n>9)
                      {
                                 if(n%2==0)
                                 {
                                            cout<<"even"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"odd"<<endl;
                                 }
                      }

           }
}
