#include<iostream>
using namespace std;
int main()
{
           int i,j,n,sum1=0,sum2=0,sum3=0;
           cin>>n;
           int a[n][3];
           for(i=0;i<n;i++)
           {
                      for(j=0;j<3;j++)
                      {
                                 cin>>a[i][j];
                      }
           }
           //for(j=0;j<1;j++)
           //{
                      for(i=0;i<n;i++)
                      {
                                 sum1=sum1+a[i][0];
                      }
           //}
          // for(j=1;j<2;j++)
           //{
                      for(i=0;i<n;i++)
                      {
                                 sum2=sum2+a[i][1];
                      }
           //}
           //for(j=2;j<3;j++)
           //{
                      for(i=0;i<n;i++)
                      {
                                 sum3=sum3+a[i][2];
                      }
           //}
           if((sum1==0) && (sum2==0) && (sum3==0))
           {
                      cout<<"YES"<<endl;
           }
           else
           {
                      cout<<"NO"<<endl;
           }
           return 0;
}
