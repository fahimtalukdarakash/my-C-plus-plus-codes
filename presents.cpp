#include<iostream>
using namespace std;
int main()
{
           int n,i,p;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(p=1;p<=n;p++)
           {
                      for(i=0;i<n;i++)
                      {
                                 if(a[i]==p)
                                 {
                                            cout<<i+1<<" ";
                                 }
                      }
           }
           cout<<endl;
           return 0;
}
