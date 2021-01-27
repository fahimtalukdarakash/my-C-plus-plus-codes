#include<iostream>
#include <bits/stdc++.h>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
           int n;
           int k,i;
           cin>>n>>k;
           for(i=1;i<=k;i++)
           {
                      if((n%10)==0)
                      {
                                 n/=10;
                      }
                      else
                      {
                                 n--;
                      }

           }
           cout<<n<<endl;
           return 0;
}
