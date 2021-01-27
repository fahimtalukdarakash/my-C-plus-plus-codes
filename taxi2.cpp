#include<iostream>
using namespace std;
int main()
{
           int n,i,c1=0,c2=0,c3=0,c4=0,c5,c6,sum=0;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<n;i++)
           {
                      if(a[i]==4)
                      {
                                 c1++;
                      }
                      if(a[i]==3)
                      {
                                 c2++;
                      }
                      if(a[i]==2)
                      {
                                 c3++;
                      }
                      if(a[i]==1)
                      {
                                 c4++;
                      }
           }
           if(c2>=c4)
           {
                      if(c3%2==0)
                      {
                                 int m=c3/2;
                                 sum=c1+c2+m;
                                 cout<<sum<<endl;
                      }
                      else
                      {
                                 int m=(c3/2)+1;
                                 sum=c1+c2+m;
                                 cout<<sum<<endl;
                      }
           }
           else
           {
                      c5=c4-c2;
                      if(c3%2==0)
                      {
                                 int m=c3/2;
                                 if(c5%4==0)
                                 {
                                            int p=c5/4;
                                            sum=c1+c2+m+p;
                                            cout<<sum<<endl;
                                 }
                                 else
                                 {
                                            int p=(c5/4)+1;
                                            sum=c1+c2+m+p;
                                            cout<<sum<<endl;
                                 }
                      }
                      else
                      {
                                 if(c5<=2)
                                 {
                                            int m=(c3/2)+1;
                                            sum=c1+c2+m;
                                            cout<<sum<<endl;
                                 }
                                 else
                                 {
                                            c6=c5-2;
                                            int m=(c3/2)+1;
                                            if(c6%4==0)
                                            {
                                                       int p=c6/4;
                                                       sum=c1+c2+m+p;
                                                       cout<<sum<<endl;
                                            }
                                            else
                                            {
                                                       int p=(c6/4)+1;
                                                       sum=c1+c2+m+p;
                                                       cout<<sum<<endl;
                                            }
                                 }
                      }
           }
           return 0;
}
