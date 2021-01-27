#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           long long n,i,j,m,q,sum1=0,sum2=0,sum=0;
           cin>>n;
           uint64_t a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           //sort(a, a + n, greater<int>());
           sort(a, a + n);
           for(i=0;i<n;i++)
           {
                      sum=sum+a[i];
           }
           cin>>m;
           for(j=1;j<=m;j++)
           {
                      cin>>q;
                      long long b= a[n-q];
                      long long c=sum-b;
                      cout<<c<<endl;
                      //for(int k=0;k<q-1;k++)
                      //{
                        //         sum1=sum1+a[k];
                      //}
                      //for(int k=q;k<n;k++)
                      //{
                        //         sum2=sum2+a[k];
                      //}
                      //sum=sum1+sum2;
                      //cout<<sum<<endl;
                      //sum1=0;
                      //sum2=0;
                      //sum=0;
           }
           return 0;
}
