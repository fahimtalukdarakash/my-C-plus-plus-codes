#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           char ch[100],str[100];
           //string ch;
           int i,j=0,len,count=0;
           cin>>ch;
           //sort(ch.begin(),ch.end());
           len=strlen(ch);
           std::sort(ch, ch+len);
           cout<<ch<<endl;
           //len=ch.length();
           for(i=0;i<len;i++)
           {
                      for(j=i;j<len;j++)
                      {
                                 if(ch[i]==ch[j+1])
                                 {
                                            //str[i]=ch[j+1];
                                            //len--;
                                            continue;
                                 }
                                 else
                                 {
                                            count++;
                                 }
                      }
           }
           cout<<count<<endl;
           //if((len%2)==0)
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
