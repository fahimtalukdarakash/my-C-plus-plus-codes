#include<iostream>
using namespace std;
int main()
{
           int i, count=0, digit,n,t,j;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n;
                      char ch[n];
                      for(j=0;j<n;j++)
                      {
                                 cin>>ch[j];
                      }
                      int k=0;
                      int a[2];
                      for(j=0;j<n;j++)
                      {
                                 digit=ch[j]-'0';
                                 if(digit%2==0)
                                 {
                                            continue;
                                 }
                                 else
                                 {
                                            count++;
                                            a[k]=digit;
                                            k++;
                                 }
                                 if(count==2)
                                 {
                                            cout<<a[0]<<a[1]<<endl;
                                            break;
                                 }
                                 else
                                 {
                                            continue;
                                 }
                      }
                      if(count<2)
                      {
                                 cout<<-1<<endl;
                      }
                      count=0;
           }
           return 0;
}
