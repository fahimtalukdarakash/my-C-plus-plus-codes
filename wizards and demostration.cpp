#include<iostream>
#include<cmath>
using namespace std;
int main()
{
           double n,x,y;
           double a;
           cin>>n>>x>>y;
           a=ceil(n*(y/100));
           if(a<=x)
           {
                      cout<<0<<endl;
           }
           else
           {
                      cout<<a-x<<endl;
           }
           return 0;
}
