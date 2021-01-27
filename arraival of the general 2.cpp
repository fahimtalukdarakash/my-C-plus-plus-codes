#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           int n,i,l1,l2,temp,count=0;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           l1=*std::max_element(a,a+n);
           l2=*std::min_element(a,a+n);
           auto itr1=find(a,a+n,l1);
           auto itr2=find(a,a+n,l2);
           int d1=distance(a,itr1);
           int d2=distance(a,itr2);
           for(i=0;i<n;i++)
           {
                      if(a[i]==l2)
                      {
                                 d2=i;
                      }
           }
           for(i=d1;i>0;i--)
           {
                      if(a[i]>a[i-1])
                      {
                                 temp=a[i];
                                 a[i]=a[i-1];
                                 a[i-1]=temp;
                                 count++;
                      }
           }
           for(i=d2;i<n-1;i++)
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
