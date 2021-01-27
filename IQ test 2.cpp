#include<iostream>
#include<algorithm>
#define MAX 1000
using namespace std;
int main()
{
           int n,i,count1=0,count2=0;
           cin>>n;
           int a[n];
           int b[n];
           for(i=1;i<=n;i++)
           {
                      cin>>a[i];
           }
           for(i=1;i<=n;i++)
           {
                      if(a[i]%2==0)
                      {
                                 b[i]=1;
                                 count1++;
                      }
                      else
                      {
                                 b[i]=0;
                                 count2++;
                      }
           }
           if(count1>count2)
           {
                      //auto itr1=find(b,b+n,0);
                      //int d1=distance(b,itr1);
                      for(i=1;i<=n;i++)
                      {
                                 if(b[i]==0)
                                 {
                                            cout<<i<<endl;
                                            break;
                                 }
                      }
                     // cout<<d1<<endl;
           }
           else
           {
                      //auto itr1=find(b,b+n,1);
                      //int d1=distance(b,itr1);
                      //cout<<d1<<endl;
                      for(i=1;i<=n;i++)
                      {
                                 if(b[i]==1)
                                 {
                                            cout<<i<<endl;
                                            break;
                                 }
                      }
           }
           return 0;
}
