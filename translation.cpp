#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           char ch1[1000],ch2[1000],ch3[100],temp;
           cin>>ch1;
           cin>>ch2;
           int i,l,j;
           l=strlen(ch1);
           for(i=0,j=l-1;i<j;i++,j--)
           {
                      swap(ch1[i],ch1[j]);
           }
           for(i=0;i<l;i++)
           {
                      if(ch1[i]==ch2[i])
                      {
                                 if(i==l-1)
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
