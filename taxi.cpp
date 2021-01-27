#include<iostream>
using namespace std;
int main()
{
           int i,n;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           int sum=0;
           for(i=0;i<n;i++)
           {
                      sum=sum+a[i];
           }
           if(sum%4==0)
           {
                      int m=sum/4;
                      cout<<m<<endl;
           }
           else
           {
                      int m=(sum/4)+1;
                      cout<<m<<endl;
           }
           return 0;
}
