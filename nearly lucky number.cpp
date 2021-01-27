#include<iostream>
#include<cmath>
using namespace std;
int main()
{
           uint64_t n;
           int i,l,count=0;
           cin>>n;
           l=floor(log10(n)+1);
           int a[l];
           for(i=0;i<l;i++)
           {
                      a[i]=n%10;
                      n/=10;
           }
           for(i=0;i<l;i++)
           {
                      if(a[i]==4 || a[i]==7)
                      {
                                 count++;
                      }
           }
           if(count==4 || count==7)
           {
                      cout<<"YES"<<endl;
           }
           else
           {
                      cout<<"NO"<<endl;
           }
           return 0;
}
