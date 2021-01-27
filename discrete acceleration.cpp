#include<iostream>
using namespace std;
int main()
{
           int n,l,i,v,b,c,t,T,sum=0;
           cin>>n,l;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           v=1;
           t=(a[0]-0)/v;
           for(i=1;i<l/2;i++)
           {
                  v++;
                  T=(a[i]-a[i-1])/v;
                  sum=sum+T;
           }
           b=l/2;
           c=t+sum+((a[b]-a[i-1])/v+1);
           cout<<c<<endl;
           return 0;
}
