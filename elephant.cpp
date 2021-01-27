#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
           int m,n;
           cin>>n;
           if(n%5==0)
           {
                      m=n/5;
                      cout<<m<<endl;
           }
           else
           {
                      m=(n/5)+1;
                      cout<<m<<endl;
           }
}
