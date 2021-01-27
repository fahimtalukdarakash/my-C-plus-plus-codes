#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,n,d,i,count=0,j;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n>>d;
                      int a[n];
                      for(j=0;j<n;j++)
                      {
                                 cin>>a[j];
                      }
                      sort(a,a+n);
                      for(j=0;j<n;j++)
                      {
                                 if(a[j]<=d)
                                 {
                                            continue;
                                 }
                                 else
                                 {
                                            a[j]=a[0]+a[1];
                                 }
                      }
                      for(j=0;j<n;j++)
                      {
                                 if(a[j]<=d)
                                 {
                                            continue;
                                 }
                                 else
                                 {
                                            count++;
                                            break;
                                 }
                      }
                      if(count==0)
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
                      count=0;
           }
           return 0;
}
