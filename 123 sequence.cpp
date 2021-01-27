#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           long long n,i,count1=0,count2=0,count3=0,count=0,b[3];
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<n;i++)
           {
                      if(a[i]==1)
                      {
                                 count1++;
                      }
                      if(a[i]==2)
                      {
                                 count2++;
                      }
                      if(a[i]==3)
                      {
                                 count3++;
                      }
           }
           b[0]=count1;
           b[1]=count2;
           b[2]=count3;
           sort(b,b+3);
           count=b[0]+b[1];
           cout<<count<<endl;
           return 0;
}
