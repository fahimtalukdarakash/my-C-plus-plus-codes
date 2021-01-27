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
                      //cout<<ch<<endl<<len<<endl;
                      a=strtod(ch);
                      int numb[len];
                      //cout<<a<<endl;
                      i=0;
                      while(a!=0)
                      {
                                 numb[i]=a%10;
                                 a/=10;
                                 i++;
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
