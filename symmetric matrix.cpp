#include<iostream>
using namespace std;
int main()
{
           int i,j,t,n,m,a[2][2],count=0;
           cin>>t;
           for(int k=1;k<=t;k++)
           {
           cin>>n>>m;
           if((m%2)==0)
           {
                      if(n==1)
                      {
                                 for(i=0;i<2;i++)
                                 {
                                            for(j=0;j<2;j++)
                                            {
                                                       cin>>a[i][j];
                                            }
                                 }
                                 if(a[0][0]==a[1][1] && a[0][1]==a[1][0])
                                 {
                                            cout<<"YES"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"NO"<<endl;
                                 }
                      }
                      else
                      {
                                 for(int b=1;b<=n;b++)
                                 {

                                            for(i=0;i<2;i++)
                                            {
                                                       for(j=0;j<2;j++)
                                                       {
                                                                  cin>>a[i][j];
                                                       }
                                            }
                                        if(a[0][0]==a[1][1]|| a[0][1]==a[1][0])
                                        {
                                                   count++;
                                        }
                                 }
                                 if(count>0)
                                 {
                                            cout<<"YES"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"NO"<<endl;
                                 }
                                 count=0;
                      }
           }
           else
           {
                      cout<<"NO"<<endl;
           }
           }
           return 0;
}
