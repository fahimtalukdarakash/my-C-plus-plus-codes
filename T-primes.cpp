#include<iostream>
#include<cmath>
using namespace std;
int main()
{
           int i,n,count,c;
           cin>>n;
           int b[n];
           uint64_t a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<n;i++)
           {
                      c=1;
                      for(int j=2;j<=sqrt(a[i]);j++)
                      {
                                 if((a[i]%j)==0)
                                 {
                                            count=0;
                                            while((a[i]%j)==0)
                                            {
                                                       a[i]/=j;
                                                       count++;
                                            }
                                            c=c*(count+1);
                                 }

                      }
                      b[i]=c;
           }
           for(i=0;i<n;i++)
           {
                      if(b[i]==3)
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
           }
           return 0;
}
