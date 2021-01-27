#include<iostream>
using namespace std;
int main()
{
           int n,i;
           cin>>n;
           int a[n];
           for(i=1;i<=n;i++)
           {
                      cin>>a[i];
           }
           for(i=1;i<n;i++)
           {
                      if((a[i]%2==0 && a[i+1]%2==0) || (a[i]%2!=0 && a[i+1]%2!=0))
                      {
                                 continue;
                      }
                      else
                      {
                                 if((a[i+1]%2==0 && a[i+2]%2==0) || (a[i+1]%2!=0 && a[i+2]%2!=0))
                                 {
                                            continue;
                                 }
                                 else
                                 {
                                            cout<<i+1<<endl;
                                            break;
                                 }
                      }
           }
           return 0;
}
