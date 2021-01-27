#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
           double n,m,a,b;
           cin>>n>>m>>a;
           if(((n>=1)&&(n<=(pow(10,9))))&&((m>=1)&&(m<=(pow(10,9))))&&((a>=1)&&(a<=(pow(10,9))))){
           b=(long long)(ceil(n/a))*(long long)(ceil(m/a));
           //std::printf("%lf",b);
           cout<<setprecision(19);
           cout<<b<<endl;
           }
           return 0;
}
