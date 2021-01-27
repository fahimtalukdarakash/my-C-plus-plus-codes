#include<iostream>
#include<cmath>
using namespace std;
int main()
{
           int t,a1,b1,a2,b2,i,c;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>a1>>b1;
                      cin>>a2>>b2;
                      c=(a1*b1)+(a2*b2);
                      double sr;
                      sr=sqrt(c);
                      if(a1==b1 || a2==b2)
                      {
                                 cout<<"NO"<<endl;
                      }
                      else
                      {
                                 if((sr - floor(sr)) == 0)
                                 {
                                            if((sr-a1 == a2 && b1 == b2) || (sr-a1 == b2 && a2 == b1) || (sr-b1 == a2 && b2 == a1) || (sr-b1 == b2 && a1 == a2))
                                            {
                                                       cout<<"YES"<<endl;
                                            }
                                            else
                                            {
                                                       cout<<"NO"<<endl;
                                            }
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
                                 }
                      }


           return 0;
}
