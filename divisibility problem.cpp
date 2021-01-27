#include<iostream>
using namespace std;
int main()
{
           int n,i,j,count=0;
           cin>>n;
           uint64_t a[n];
           uint64_t b[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i]>>b[i];
           }
           for(i=0,j=0;i<n,j<n;i++,j++)
           {
                      while(a[i]%b[j]!=0)
                      {
                                 a[i]=a[i]+1;
                                 count++;
                      }
                      cout<<count<<endl;
                      count=0;
           }
           return 0;
}
