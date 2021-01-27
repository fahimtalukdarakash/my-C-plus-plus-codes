#include<iostream>
using namespace std;
int main()
{
           char ch1,ch2;
           cin>>ch1>>ch2;
           int count=0;
           for(int i=1;i<=5;i++)
           {
                      char a,b;
                      cin>>a>>b;
                      if(ch1==a || ch2==b)
                      {
                                 count++;
                      }
                      else
                      {
                                 continue;
                      }
           }
           if(count>0)
           {
                      cout<<"YES"<<endl;
           }
           else
           {
                      cout<<"NO"<<endl;
           }
           return 0;
}
