#include<iostream>
using namespace std;
int main()
{
           uint64_t n,k,i,a;
           cin>>n>>k;
           if(n%2==0)
           {
                      i=n/2;
           }
           else
           {
                      i=(n/2)+1;
           }
           if(k<=i)
           {
                      a=(2*k)-1;
           }
           else
           {
                      a=(k-i)*2;
           }
           cout<<a<<endl;
           return 0;
}
