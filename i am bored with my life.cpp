#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
           long long int a,b, ans=1;
           cin>>a>>b;
           for(int i=1;i<=min(a,b);i++)
           {
                      ans=ans*i;
           }
           cout<<ans<<endl;
           return 0;
}
