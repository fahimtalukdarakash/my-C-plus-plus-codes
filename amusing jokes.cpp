#include<iostream>
#include<cstring>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()

{
           //char ch1[100],ch2[100],ch3[100];
           string ch1,ch2,ch3,ch4;
           cin>>ch1;
           cin>>ch2;
           cin>>ch3;
           int l1,l2,l3,l4,i;
           ch4=ch1+ch2;
           l3=ch3.size();
           l4=ch4.size();
           //l1=strlen(ch1);
           //l2=strlen(ch2);
           //l3=strlen(ch3);
           //char ch4[200];
           //for(i=0;i<l1;i++)
           //{
             //         ch4[i]=ch1[i];
           //}
           //for(i=0;i<l2;i++)
           //{
             //         ch4[i+l1]=ch2[i];
           //}
           //int l4=strlen(ch4);
           //std::sort(ch3,ch3+l3);
           //std::sort(ch4,ch4+l4);
           //cout<<ch3<<endl<<ch4<<endl;
           std::sort(ch3.begin(),ch3.end());
           std::sort(ch4.begin(),ch4.end());
           if(l3==l4)
           {
           for(i=0;i<l3;i++)
           {
                      if(ch4[i]==ch3[i])
                      {
                                 if(i==l3-1)
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
           }
           else
           {
                      cout<<"NO"<<endl;
           }
           return 0;
}
