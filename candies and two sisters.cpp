#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
           int n,i;
           uint64_t a;
           cin>>n;
           for(i=1;i<=n;i++)
           {
                      cin>>a;
                      cout<<setprecision(10)<<(a-1)/2<<endl;
           }
           return 0;
}
