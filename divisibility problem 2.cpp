#include<iostream>
using namespace std;
int main()
{
           int n,i,count=0;
           uint64_t a,b;
           cin>>n;
           for(i=1;i<=n;i++)
           {
                      cin>>a>>b;
                      if(a%b==0)
                      {
                                 cout<<0<<endl;
                      }
                      else
                      {
                                 cout<<b-(a%b)<<endl;
                      }
           }
           return 0;
}
