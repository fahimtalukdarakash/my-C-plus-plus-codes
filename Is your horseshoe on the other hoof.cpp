#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           uint64_t a[4];
           int i,count=0;
           for(i=0;i<4;i++)
           {
                      cin>>a[i];
           }
           sort(a,a+4);
           for(i=0;i<3;i++)
           {
                      if(a[i]==a[i+1])
                      {
                                 count++;
                      }
                      else
                      {
                                 continue;
                      }
           }
           cout<<count<<endl;
           return 0;
}
