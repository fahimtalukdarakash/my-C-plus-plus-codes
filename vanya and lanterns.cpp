#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           int n,l,sum=0;
           cin>>n>>l;
           int a[n];
           for(int i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           sort(a,a+n);
           int b;
           b=a[0]-0;
           for(int i=1;i<n-3;i++)
           {
                      b=a[i+1]-a[i];
                      sum=sum+b;
           }
           b=l-a[n-1];
           sum=sum+b;
           cout<<sum/n<<endl;
           return 0;
}
