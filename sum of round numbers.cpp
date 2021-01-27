#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
           int n,i,j,count=0,b;
           cin>>n;
           for(i=1;i<=n;i++)
           {
                      cin>>b;
                      int l=floor(log10(b) + 1);
                      int a[l];
                      int c[l];
                      for(j=0;j<l;j++)
                      {
                            a[j]=b%10;
                            b=b/10;
                      }

           for(j=0;j<l;j++)
           {
                      c[j]=a[j]*pow(10,j);
           }
           for(j=0;j<l;j++)
           {
                      if(c[j]==0)
                      {
                                 continue;
                      }
                      else
                      {
                                 count++;
                      }
           }
           cout<<count<<endl;
           for(j=0;j<l;j++)
           {
                      if(c[j]==0)
                      {
                                 continue;
                      }
                      else
                      {
                                 cout<<c[j]<<" ";
                      }
           }
           cout<<endl;
           count=0;
           }
           return 0;
}
