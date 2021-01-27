#include<iostream>
#include<algorithm>
#include<iomanip>
#include <bits/stdc++.h>
using namespace std;
int main()
{
           int i,n;
           cin>>n;
           uint64_t  a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           sort(a,a+n);
           //for(i=0;i<n;i++)
           //{
             //         cout<<a[i]<<" ";
           //}
           double result=a[n-1]*a[n-2];
           std::cout << std::setprecision(30)<<result<<endl;
           //long long p=*max_element(a , a + n);
           //cout<<a[n-1]<<endl<<p<<endl;
           return 0;
}
