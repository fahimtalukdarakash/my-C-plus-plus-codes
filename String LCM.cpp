#include<iostream>
#include<string.h>
#include <cstring>
using namespace std;
int main()
{
           int n,l1,l2;
           cin>>n;
           for(int i=1;i<=n;i++)
           {
                      string s,t;
                      cin>>s;
                      cin>>t;
                      string s1,t1;
                      s1=s;
                      t1=t;
                      l1=s1.size();
                      l2=t1.size();
                      while(l1!=l2)
                      {
                                 if(l1<l2)
                                 {
                                            s1=s1+s;
                                            l1=s1.size();
                                 }
                                 if(l1>l2)
                                 {
                                            t1=t1+t;
                                            l2=t1.size();
                                 }
                      }
                      //cout<<t<<endl;
                      if(s1==t1)
                      {
                                 cout<<s1<<endl;
                      }
                      else
                      {
                                 cout<<-1<<endl;
                      }
           }
           return 0;
}
