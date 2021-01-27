#include<iostream>
#include<cmath>
using namespace std;
int main()
{
           int t,n,k,i;
           long long a[1000000000],j;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n>>k;
                      for(j=0;j<1000000000;j++)
                      {
                                 a[j]=j;
                      }
                      for(j=0;j<ceil(1000000000/n);j++)
                      {
                                 a[n*j]=0;
                      }
                      for(j=0;j<1000000000;j++)
                      {
                                 if(a[j]==0)
                                 {
                                            a[j]=a[j+1];
                                 }
                      }
                      cout<<a[k-1]<<endl;
           }
           return 0;
}
