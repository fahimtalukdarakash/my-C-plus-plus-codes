#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           int n,p,i,j,count=1;
           cin>>n;
           int x,y;
           cin>>x;
           int a[x];
           for(i=0;i<x;i++)
           {
                      cin>>a[i];
           }
           cin>>y;
           int b[y];
           for(i=0;i<y;i++)
           {
                      cin>>b[i];
           }
           int arr[x+y];
           std::copy(a,a+x,arr);
           std::copy(b,b+y,arr+x);
           sort(arr,arr+x+y);
           for(i=0;i<(x+y)-1;i++)
           {
                      if(arr[i]==arr[i+1])
                      {
                            continue;
                      }
                      else
                      {
                                 count++;
                      }
           }
           if(x>0 || y>0)
           {
           if(count==n)
           {
                      cout<<"I become the guy."<<endl;
           }
           else
           {
                      cout<<"Oh, my keyboard!"<<endl;
           }
           }
           else
           {
                     cout<<"Oh, my keyboard!"<<endl;
           }
           return 0;
}
