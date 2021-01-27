#include<iostream>
using namespace std;
int main()
{
           int n,i,sum1=0,sum2=0,m,count=0,j,temp;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<=n-2;i++)
           {
                      for(j=i+1;j<=n-1;j++)
                                 if(a[i]<a[j])
                      {
                                 {
                                            temp=a[i];
                                            a[i]=a[j];
                                            a[j]=temp;
                                 }
                      }
           }
           for(i=0;i<n;i++)
           {
                      sum1=sum1+a[i];
           }
           m=sum1/2;
           for(i=0;i<n;i++)
           {
                      if(sum2>m)
                      {
                                 break;
                      }
                      else
                      {
                                 sum2=sum2+a[i];
                                 count++;
                      }
           }
           cout<<count<<endl;
           return 0;
}
