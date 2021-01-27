#include<iostream>
using namespace std;
int main()
{
           long long t,n,k,i,sum=1,a;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n>>k;
                      n=n-1;
                      while(n>0)
                      {
                                 a=n%k;
                                 n=n-a;
                                 sum=sum+a;
                                 while(n%k==0)
                                 {
                                            n=n/k;
                                            sum=sum+1;
                                 }
                      }
                      cout<<sum<<endl;
                      sum=1;
           }
           return 0;
}
