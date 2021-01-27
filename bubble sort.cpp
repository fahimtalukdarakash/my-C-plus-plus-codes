#include<iostream>
using namespace std;
int main()
{
           int i,j,temp,n,k,sum,a;
           cin>>n>>k;
           int numb[n];
           a=k;
           sum=0;
           for(i=0;i<n;i++)
           {
                      cin>>numb[i];
           }
           for(i=0;i<=n-2;i++)
           {
                      for(j=i+1;j<=n-1;j++)
                                 if(numb[i]<numb[j])
                      {
                                 {
                                            temp=numb[i];
                                            numb[i]=numb[j];
                                            numb[j]=temp;
                                 }
                      }
           }
          for(i=0;i<n;i++)
          {
                     sum=sum+numb[i];
          }
          if(sum==0){
                     k=0;
                     cout<<k<<endl;
          }
          else
          {
          for(i=k;i<n;i++)
          {
                     if(numb[i-1]>numb[i])
                     {
                                break;
                     }
                     else
                     {
                                k++;
                     }

          }
          cout<<k<<endl;

          for(i=k;i>=0;i--)
          {
                     if(numb[i-1]==0)
                     {
                                k--;
                     }
                     else
                     {
                                break;
                     }
          }
          if(k<a)
          {
                     cout<<k<<endl;
          }
          }
           return 0;
}
