#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
           char ch1[200],ch2[200];
           int i;
           cin>>ch1;
           cin>>ch2;
           int l=strlen(ch1);
           for(i=0;i<l;i++)
           {
                      if(ch1[i]==ch2[i])
                      {
                                 cout<<0;
                      }
                      else
                      {
                                 cout<<1;
                      }
           }
           cout<<endl;
           //cout<<str<<endl<<l<<endl;
           return 0;
}
