#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
           int a[1000000]={0};
           long long n,b,c;


           for(int i=2;i<=1000000;i++)
           {
                      if(a[i]==0)
                      {
                                 for(int j=2;i*j<=1000000;j++)
                                 {
                                            a[i*j]=1;
                                 }
                      }
           }
           //uint64_t n,b,c;
           cin>>n;
           for(int i=1;i<=n;i++)
           {
                      cin>>b;
                      c=sqrt(b);
                      if(c==1)
                      {
                                 cout<<"NO"<<endl;
                      }
                      else if((c*c)==b && a[c]==0)
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
           }
           return 0;
}
