#include<iostream>
#include<cstring>
#include<string.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
           char ch[100];
           int n,i,count=1;
           cin>>n;
           cin>>ch;
           int l=strlen(ch);
           for(i=0;i<l;i++)
           {
                      if(ch[i]>='A' && ch[i]<='Z')
                      {
                                 ch[i]=ch[i]+32;
                      }
           }
           std::sort(ch,ch+l);
           for(i=0;i<l-1;i++)
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
           if(count<26)
           {
                      cout<<"NO"<<endl;
           }
           else
           {
                     cout<<"YES" <<endl;
           }
           return 0;
}
