#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
           double k,n,w,sum=0,a;
           int i;
           cin>>k>>n>>w;
           for(i=1;i<=w;i++)
           {
                  a=i*k;
                  sum=sum+a;
           }
           if(sum>n)
           {
                      //std::setprecision(19);
                      std::cout<<std::setprecision(19)<<sum-n<<endl;
           }
           else
           {
                      cout<<0<<endl;
           }
           return 0;
}
