#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
           int s,n,i,x,y,j;
           cin>>s>>n;
           int a[n];
           int b[n];
           for(i=0;i<n;i++)
           {
                     cin>>a[i]>>b[i];
           }
           for(i=0;i<n;i++)
           {
                      for(j=0;j<n-1;j++)
                      {
                                 if(a[j]>a[j+1])
                                 {
                                            swap(a[j],a[j+1]);
                                            swap(b[j],b[j+1]);
                                 }
                      }
           }
           for(i=0;i<n;i++)
           {
                      if(s>a[i])
                      {
                                 s=s+b[i];
                                 if(i==n-1)
                                 {
                                            cout<<"YES"<<endl;
                                 }
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                                 break;
                      }
           }

           return 0;
}
