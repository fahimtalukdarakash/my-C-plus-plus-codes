#include<iostream>
using namespace std;
int main()
{
           uint64_t n,k,i,m;
           cin>>n>>k;
           uint64_t a[n];
           if(n%2==0)
           {
                      for(i=0,m=1;i<n/2;i++,m=m+2)
                      {
                                 a[i]=m;
                      }
                      for(i=n/2,m=2;i<n;i++,m=m+2)
                      {
                                 a[i]=m;
                      }
           }
           else
           {
                      for(i=0,m=1;i<=n/2;i++,m=m+2)
                      {
                                 a[i]=m;
                      }
                      for(i=(n/2)+1,m=2;i<n;i++,m=m+2)
                      {
                                 a[i]=m;
                      }
           }
           cout<<a[k-1]<<endl;
           return 0;
}
