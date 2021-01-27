#include<iostream>
using namespace std;
int main()
{
           int n,i;
           cin>>n;
           for(i=1;i<=n;i++)
           {
                      cout<<"I ";
                      if(i%2==0)
                      {
                                 cout<<"love ";
                      }
                      else
                      {
                                 cout<<"hate ";
                      }
                      if(i==n)
                      {
                                 break;
                      }
                      cout<<"that ";
           }
           cout<<"it"<<endl;
           return 0;
}
