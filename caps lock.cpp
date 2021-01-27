#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
           char ch[100];
           int i,l;
           cin>>ch;
           l=strlen(ch);
           if(l>1)
           {
           if(ch[0]>='a' && ch[0]<='z')
           {
                      //ch[0]=ch[0]-32;
                      for(i=1;i<l;i++)
           {
                      if(ch[i]>='A' && ch[i]<='Z')
                      {
                                 //ch[i]=ch[i]+32;
                                 if(i==l-1)
                                 {
                                            for(i=1;i<l;i++)
                                            {
                                                       ch[i]=ch[i]+32;
                                            }
                                            ch[0]=ch[0]-32;
                                 }
                      }
                      else
                      {
                                 break;
                      }
           }
           }
           //cout<<ch<<endl;
           for(i=0;i<l;i++)
           {
                      if(ch[i]>='A' && ch[i]<='Z')
                      {
                                  if(i==l-1)
                                 {
                                            for(i=0;i<l;i++)
                                            {
                                                       ch[i]=ch[i]+32;
                                            }
                                 }
                                  }
                      else
                      {
                                 break;
                      }
           }
           cout<<ch<<endl;
           }
           else
           {
                      if(ch[0]>='a' && ch[0]<='z')
                      {
                                 ch[0]=ch[0]-32;
                                 cout<<ch<<endl;
                      }
                      else
                      {
                                 ch[0]=ch[0]+32;
                                 cout<<ch<<endl;
                      }
           }
           return 0;
}
