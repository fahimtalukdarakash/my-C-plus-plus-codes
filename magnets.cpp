#include<iostream>
using namespace std;
int main()
{
           int n,i,count=1;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<n-1;i++)
           {
                      if(a[i]==a[i+1])
                      {
                                 continue;
                      }
                      else
                      {
                                 count++;
                      }
           }
           cout<<count<<endl;
           return 0;
}
