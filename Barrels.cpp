#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           int n,k,t,i,j,sum=0,m,x,pos;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n>>k;
                      uint64_t a[n];
                      for(j=0;j<n;j++)
                      {
                                 cin>>a[j];
                      }
                      sort(a,a+n);
                      for( j=n-1,m=1;m<=k;m++,j=j-2)
                      {
                                sum=sum+a[j]+a[j-1];

                      }
                      cout<<sum<<endl;
                      sum=0;
           }
           return 0;
}
