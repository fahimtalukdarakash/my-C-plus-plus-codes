#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
           int n,i;
           float sum=0;
           cin>>n;
           float a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<n;i++)
           {
                      sum=sum+(a[i]/100);
           }
           sum/=n;
           sum*=100;
           std::cout<<std::setprecision(14)<<sum<<endl;
           return 0;
}
