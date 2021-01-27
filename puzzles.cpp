#include<iostream>
#include<cmath>
#include<iterator>
#include<array>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,m,i,ans,b;
           cin>>n>>m;
           int a[m];
           for(i=0;i<m;i++)
           {
                      cin>>a[i];
           }
           sort(a,a+m);
           b=a[m-1]-a[0];
           for(i=n;i<=m;i++)
           {
                      ans=a[i-1]-a[i-n];
                      ans=abs(ans);
                      b=min(b,ans);
           }
           cout<<b<<endl;
           return 0;
}
