#include<iostream>
using namespace std;
int main()
{
           uint64_t n,m,i;
           uint64_t sum=0;
           cin>>n>>m;
           uint64_t a[m];
           for(i=0;i<m;i++)
           {
                      cin>>a[i];
           }
           if(a[0]>=1)
           {
                      sum=sum+(a[0]-1);
           }
           for(i=0;i<m-1;i++)
           {
                      if(a[i]>a[i+1])
                      {
                                 sum=sum+(n-(a[i]-a[i+1]));
                      }
                      else
                      {
                                 sum=sum+(a[i+1]-a[i]);
                      }
           }
           cout<<sum<<endl;
           return 0;
}
