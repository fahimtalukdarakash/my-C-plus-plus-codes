#include<iostream>
using namespace std;
int main()
{
           char ch[50];
           int i,n,c=0,d=0;
           cin>>n;
           cin>>ch;
           for(i=0;i<n;i++)
           {

                      if(ch[i]==ch[i+1])
                      {
                                 c++;
                                 if(c>1)
                                 {
                                            d++;
                                 }
                                 else
                                 {
                                            continue;
                                 }
                      }
                      else
                      {
                                 c=0;
                      }
                      if(ch[i]=='G')
                      {
                                 c++;
                                 if(c>1)
                                 {
                                            d++;
                                 }
                                 else
                                 {
                                            continue;
                                 }
                      }
                      else
                      {
                                 c=0;
                      }
                      if(ch[i]=='B')
                      {
                                 c++;
                                 if(c>1)
                                 {
                                            d++;
                                 }
                                 else
                                 {
                                            continue;
                                 }
                      }
                      else
                      {
                                 c=0;
                      }
           }
           cout<<d<<endl;
           return 0;
}
