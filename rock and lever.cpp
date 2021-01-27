#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           uint64_t i,j,k,t,n,count=0;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n;
                      uint64_t a[n];
                      for(j=0;j<n;j++)
                      {
                                 cin>>a[j];
                      }
                      sort(a,a+n);
                      for(j=0;j<n;j++)
                      {
                                 for(k=j+1;k<n;k++)
                                 {
                                            if((a[j]&a[k])>=(a[j]^a[k]))
                                            {
                                                       count++;
                                            }
                                 }
                      }
                      cout<<count<<endl;
                      count=0;
           }
           return 0;
}
