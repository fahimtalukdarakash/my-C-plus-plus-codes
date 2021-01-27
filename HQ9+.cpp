#include<iostream>
#include<cstring>
using namespace std;
int main()
{
           char ch[100];
           int i,l;
           cin>>ch;
           l=strlen(ch);
           for(i=0;i<l;i++)
           {
                      if(ch[i]>='!' && ch[i]<='~')
                      {
                                 if(ch[i]=='H' || ch[i]=='Q' || ch[i]=='9')
                                 {
                                            cout<<"YES"<<endl;
                                            break;
                                 }
                                 else
                                 {
                                            if(i==l-1)
                                            {
                                                       cout<<"NO"<<endl;
                                            }
                                 }
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
           }
           return 0;
}
