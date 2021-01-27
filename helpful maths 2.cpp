#include<iostream>
#include<cstring>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
           char ch[200];
           //int numb[100];
           int i,len,j,a,temp;
           cin>>ch;
           len=strlen(ch);
           if(len==1)
           {
                      cout<<ch<<endl;
           }
           else
           {
                      for(i=0;i<len;i++)
                      {
                                 if(ch[i]=='+')
                                 {
                                            for(j=i;j<len;j++)
                                            {
                                                       ch[j]=ch[j+1];
                                            }
                                            len--;
                                 }
                      }
                      int numb[len];
                      for(i=0;i<len;i++)
                      {
                                 numb[i]=ch[i]-'0';
                      }
                      for(i=0;i<=len-2;i++)
           {
                      for(j=i+1;j<=len-1;j++)
                                 if(numb[i]>numb[j])
                      {
                                 {
                                            temp=numb[i];
                                            numb[i]=numb[j];
                                            numb[j]=temp;
                                 }
                      }
           }
            for(i=0;i<len-1;i++)
                      {
                                 cout<<numb[i]<<"+";
                      }
                      cout<<numb[len-1]<<endl;
           }
           return 0;
}
