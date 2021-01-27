#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
           int n,i,j,count=0;
           float sum=0,avg;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           sort(a, a + n);
           for(i=0;i<n;i++)
           {
                      sum=sum+a[i];
           }
           avg=sum/n;
           //c//out<<sum<<avg<<endl;
           if(avg>=4.5)
           {
                      cout<<0<<endl;
           }
           else
           {
                      for(i=0;i<n;i++)
                      {
                                 a[i]=5;
                                 count++;
                                 sum=0;
                                 for(j=0;j<n;j++)
                                 {
                                            sum=sum+a[j];
                                 }
                                 avg=sum/n;
                                 if(avg>=4.5)
                                 {
                                            cout<<count<<endl;
                                            break;
                                 }
                                 else
                                 {
                                            continue;
                                 }
                      }
           }
           return 0;
}
