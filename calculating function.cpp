#include<iostream>
#include<cmath>
using namespace std;
int main()
{
      signed long long n,i,sum1=0,sum2=0,sum;
      cin>>n;
      if(n%2==0)
      {
                 for(i=2;i<=n;i=i+2)
                 {
                            sum1=sum1+i;
                 }
                 for(i=1;i<=n-1;i=i+2)
                 {
                            sum2=sum2-i;
                 }
      }
      else
      {
                 for(i=1;i<=n;i=i+2)
                 {
                            sum2=sum2-i;
                 }
                 for(i=2;i<=n-1;i=i+2)
                 {
                            sum1=sum1+i;
                 }
      }
      sum=sum1+sum2;
      cout<<sum<<endl;
      return 0;
}
