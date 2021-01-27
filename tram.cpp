#include<iostream>
using namespace std;
int main()
{
           int n,i,a,b,j,sum=0,temp;
           cin>>n;
           int c[n];
           for(i=0;i<n;i++)
           {
                      cin>>a>>b;
                      sum=sum+(b-a);
                      c[i]=sum;
           }
          for(i=0;i<=n-2;i++)
           {
                      for(j=i+1;j<=n-1;j++)
                                 if(c[i]<c[j])
                      {
                                 {
                                            temp=c[i];
                                            c[i]=c[j];
                                            c[j]=temp;
                                 }
                      }
           }
         cout<<c[0]<<endl;
         return 0;
}
