#include<iostream>
using namespace std;
int main()
{
           int t,a,b,count1=0,count2=0,count;
           int i;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>a>>b;
                      if(a>b)
                      {
                                 count1=count1+1;
                      }
                      else if(a==b)
                      {
                                 continue;
                      }
                      else
                      {
                                 count2=count2+1;
                      }

           }
           if(count1>count2)
           {
                      cout<<"Mishka"<<endl;
           }
           else if(count1==count2)
           {
                      cout<<"Friendship is magic!^^"<<endl;
           }
           else
           {
                      cout<<"Chris"<<endl;
           }
           return 0;

}
