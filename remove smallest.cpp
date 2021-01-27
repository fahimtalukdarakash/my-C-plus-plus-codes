#include<iostream>
#include <cstdlib>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
           int n,i,j,b;
           cin>>n;
           for(i=0;i<n;i++)
           {
                      cin>>b;
                      int a[b];
                      for(j=0;j<b;j++)
                      {
                                 cin>>a[j];
                      }
                      std::sort(a,a+b);
                      int l1=sizeof(a)/sizeof(a[0]);
                      if(l1==1)
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                      for(j=0;j<b-1;j++)
                      {
                                 if(a[j+1]-a[j]>1)
                                 {
                                            cout<<"NO"<<endl;
                                            break;
                                 }
                                 else
                                 {
                                            if(j==b-2)
                                            {
                                                       cout<<"YES"<<endl;
                                            }
                                 }
                      }
                      }
           }
           return 0;
}
