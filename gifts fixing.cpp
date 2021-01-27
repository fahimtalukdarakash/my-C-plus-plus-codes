#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           int t,n,i,j,count=0;
           cin>>t;

           for(i=0;i<t;i++)
           {
                      cin>>n;
                      uint64_t a[n];
                      uint64_t b[n];
                      uint64_t ans=0;
                      for(j=0;j<n;j++)
                      {
                                 cin>>a[j];
                      }
                      for(j=0;j<n;j++)
                      {
                                 cin>>b[j];
                      }
                      int ma=*min_element(a,a+n);
                      int mb=*min_element(b,b+n);
                      for(j=0;j<n;j++)
                      {
                                 ans += max(a[j] - ma, b[j] - mb);
                      }
                      cout<<ans<<endl;
           }
           return 0;
}
