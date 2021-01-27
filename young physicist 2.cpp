#include<iostream>
using namespace std;
int main()
{
           int i,j,n,sum1=0,sum2=0,sum3=0,sum=0,b[3];
           cin>>n;
           int a[n][3];
           for(i=0;i<n;i++)
           {
                      for(j=0;j<3;j++)
                      {
                                 cin>>a[i][j];
                      }
           }
           for(j=0;j<3;j++)
           {
                      for(i=0;i<n;i++)
                      {
                                 sum=sum+a[j][i];
                                 //b[j]=sum;
                      }
                      b[j]=sum;
           }
           for(j=0;j<3;j++)
           {
                      cout<<b[j]<<endl;
           }
           return 0;
}
