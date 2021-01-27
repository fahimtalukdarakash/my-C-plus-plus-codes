#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           int n,i,count=0,temp,l;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           int max,min;
           max=a[0];
           for(i=1;i<n;i++)
           {
                      if(a[i]>max)
                      {
                            max=a[i];
                            l=i;
                      }
           }
           for(i=l;i>0;i--)
           {
                      if(a[i]>a[i-1])
                      {
                                 temp=a[i];
                                 a[i]=a[i-1];
                                 a[i-1]=temp;
                                 count++;
                      }
           }
           min=a[0];
           int l2;
           for(i=1;i<n;i++)
           {
                      if(a[i]<min)
                      {
                            min=a[i];
                            l2=i;
                      }
           }
           for(i=l2;i<n-1;i++)
           {
                      if(a[i]<a[i+1])
                      {
                                 temp=a[i];
                                 a[i]=a[i+1];
                                 a[i+1]=temp;
                                 count++;
                      }
           }
           cout<<count<<endl;
           return 0;
}
