#include<iostream>
using namespace std;
int main()
{
           int n,i,j,count=0;
           cin>>n;
           int a[n];
           int b[n];
           for(i=0,j=0;i<n,j<n;i++,j++)
           {
                      cin>>a[i]>>b[i];
           }
           for(i=0;i<n;i++)
           {
                      for(j=0;j<n;j++)
                      {
                                 if(a[i]==b[j])
                                 {
                                            count++;
                                 }
                      }
           }
           cout<<count<<endl;
           return 0;
}
