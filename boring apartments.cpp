#include<iostream>
#include<string>
using namespace std;
int main()
{
           int t,n,i,j,l,k,sum=0,a;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n;
                      string str= to_string(n);
                      l=str.size();
                      a=n%10;
                      if(a==1)
                      {
                                 for(k=1;k<=l;k++)
                                 {
                                            sum=sum+k;
                                 }
                      }
                      else if(a==2)
                      {
                                 sum=10;
                                 for(k=1;k<=l;k++)
                                 {
                                            sum=sum+k;
                                 }
                      }

                      else if(a==3)
                      {
                                 sum=10*2;
                                 for(k=1;k<=l;k++)
                                 {
                                       sum=sum+k;
                                 }
                      }
                      else if(a==4)
                      {
                                 sum=10*3;
                                 for(k=1;k<=l;k++)
                                 {
                                       sum=sum+k;
                                 }
                      }
                      else if(a==5)
                      {
                                 sum=10*4;
                                 for(k=1;k<=l;k++)
                                 {
                                       sum=sum+k;
                                 }
                      }
                      else if(a==6)
                      {
                                 sum=10*5;
                                 for(k=1;k<=l;k++)
                                 {
                                       sum=sum+k;
                                 }
                      }
                      else if(a==7)
                      {
                                 sum=10*6;
                                 for(k=1;k<=l;k++)
                                 {
                                       sum=sum+k;
                                 }
                      }
                      else if(a==8)
                      {
                                 sum=10*7;
                                 for(k=1;k<=l;k++)
                                 {
                                       sum=sum+k;
                                 }
                      }
                      else if(a==9)
                      {
                                 sum=10*8;
                                 for(k=1;k<=l;k++)
                                 {
                                       sum=sum+k;
                                 }
                      }
                      cout<<sum<<endl;
                      sum=0;
           }
           return 0;
}
