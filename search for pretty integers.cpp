#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,m,count1=0,count2=0;
           cin>>n>>m;
           int a[n],b[m];
           for(int i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(int i=0;i<m;i++)
           {
                      cin>>b[i];
           }
           sort(a,a+n);
           sort(b,b+m);
           for(int i=0;i<n;i++)
           {
                      for(int j=0;j<m;j++)
                      {
                                 if(a[i]==b[j])
                                 {
                                            count1++;
                                            cout<<a[i]<<endl;
                                            break;
                                 }
                                 else
                                 {
                                   continue;
                                 }
                      }
                      if(count1>0)
                      {
                                 break;
                      }
                      else
                      {
                                 continue;
                      }
           }
           if(count1==0)
           {
                      if(a[0]>b[0])
                      {
                                 cout<<b[0]<<a[0]<<endl;
                      }
                      else
                      {
                                 cout<<a[0]<<b[0]<<endl;
                      }
           }
           return 0;
}
