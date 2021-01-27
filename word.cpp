#include<iostream>
#include<cstring>
using namespace std;
int main()
{
           int i,count1=0,count2=0;
           char ch[100];
           cin>>ch;
           int l=strlen(ch);
           for(i=0;i<l;i++)
           {
                      if(ch[i]>='A' && ch[i]<='Z')
                      {
                                 count1++;
                      }
                      else
                      {
                                 count2++;
                      }
           }
           if(count1>count2)
           {
                      for(i=0;i<l;i++)
                      {
                                 if(ch[i]>='a' && ch[i]<='z')
                                 {
                                            ch[i]=ch[i]-32;
                                 }
                      }
                      cout<<ch<<endl;
           }
           else
           {
                      for(i=0;i<l;i++)
                      {
                                 if(ch[i]>='A' && ch[i]<='Z')
                                 {
                                            ch[i]=ch[i]+32;
                                 }
                      }
                      cout<<ch<<endl;
           }
           return 0;
}
