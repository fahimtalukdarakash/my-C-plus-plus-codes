#include<iostream>
using namespace std;
int main()
{
           int t,n,i,j,k,count=0;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n;
                      int a[n];
                      for(j=0;j<n;j++)
                      {
                                 cin>>a[j];
                      }
                      for(j=0;j<n;j++)
                      {
                                 if(a[j]==1)
                                 {
                                            count++;
                                 }
                                 //if(j+1==n)
                                 //{
                                   //       if(count==1)
                                     //     {
                                       //              cout<<0<<endl;
                                         //            break;
                                          //}
                                 //}
                      }
                      if(count==1)
                      {
                                 cout<<0<<endl;
                                 break;
                      }
                      count=0;
                      for(j=0;j<n;j++)
                      {
                                 if(a[j]==1)
                                 {
                                            k=j+1;
                                            while(a[k]==0)
                                            {
                                                       count++;
                                                       k++;
                                            }
                                 }
                      }
                      cout<<count<<endl;
                      count=0;

           }
           return 0;
}
