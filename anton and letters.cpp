#include<iostream>
#include<algorithm>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           string ch;
           string ch2;
           int i,l,count=0;
           getline(cin,ch);
           l=ch.size();
           std::sort(ch.begin(),ch.end());
           for(i=0;i<l-1;i++)
           {
                      if(ch[i]=='{}' || ch[i]==',' || ch[i]==' ')
                      {
                                 continue;
                      }
                      else
                      {
                                 if(ch[i]!=ch[i+1])
                                 {
                                            count++;
                                 }
                      }
           }
           cout<<count-1<<endl;
           return 0;
}
