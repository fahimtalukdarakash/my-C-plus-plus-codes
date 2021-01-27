#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
           uint64_t a,b,count;
           int t;
           cin>>t;
           for(int i=1;i<=t;i++)
           {
                      cin>>a>>b;
                      if(b>a)
                      {
                                // cout<<ceil((b-a)/10)<<endl;
                                 //cout<<count<<endl;
                                 if((b-a)%10==0)
                                 {
                                            cout<<((b-a)/10)<<endl;
                                 }
                                 else
                                 {
                                            cout<<((b-a)/10)+1<<endl;
                                 }
                      }
                      else
                      {
                                 if((a-b)%10==0)
                                 {
                                            cout<<((a-b)/10)<<endl;
                                 }
                                 else
                                 {
                                            cout<<((a-b)/10)+1<<endl;
                                 }
                                 //cout<<ceil((a-b)/10)<<endl;
                                 //cout<<count<<endl;
                      }
                     //std::cout << std::setprecision(14)<<count<<endl;
           }
           return 0;
}
