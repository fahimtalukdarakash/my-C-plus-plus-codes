#include<iostream>
using namespace std;
int main()
{
           long long int a,b,x,y,z;
           cin>>a>>b;
           cin>>x>>y>>z;
           long long int ans1,ans2,ans;
           if((2*x+y)>a)
           {
                      ans1=(2*x+y)-a;
           }
           else
           {
                      ans1=0;
           }
           if((3*z+y)>b)
           {
                      ans2=(3*z+y)-b;
           }
           else
           {
                      ans2=0;
           }
           ans=ans1+ans2;
           cout<<ans<<endl;
           return 0;
}
