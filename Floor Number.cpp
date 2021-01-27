#include<iostream>
using namespace std;
int main()
{
           int t,n,x,i,b,a;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n>>x;
                      if(n==1 || n==2)
                      {
                                 cout<<1<<endl;
                      }
                      else
                      {
                      a=3;
                      b=x+2;
                      int j=2,count=2;
                      while(b<n)
                      {
                             b=j*x+2;
                             count++;
                             j++;
                      }
                      //if(b==n)
                      //{
                        //         cout<<count<<endl;
                      //}
                      //else
                      //{
                        //         cout<<count<<endl;
                      //}
                      cout<<count<<endl;
                      count=0;
                      }
           }
           return 0;
}
