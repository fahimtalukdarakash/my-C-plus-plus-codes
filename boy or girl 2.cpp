#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           char ch[100];
           int i,j,len,count=1;
           cin>>ch;
           len=strlen(ch);
           std::sort(ch, ch+len);
           //cout<<ch<<endl;
           for(i=0;i<len-1;i++)
           {
                      if(ch[i]==ch[i+1])
                      {
                                 continue;
                      }
                      else
                      {
                                 count++;
                      }
           }
           //cout<<count<<endl;
           if((count%2)==0)
           {
                      cout<<"CHAT WITH HER!"<<endl;
           }
           else
           {
                      cout<<"IGNORE HIM!"<<endl;
           }
           return 0;
}
