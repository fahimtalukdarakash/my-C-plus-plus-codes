#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           uint64_t d[4],a,b,c;
           int i;
           for(i=0;i<4;i++)
           {
                      cin>>d[i];
           }
           sort(d,d+4);
           a=d[3]-d[2];
           b=d[3]-d[0];
           c=d[3]-d[1];
           cout<<a<<" "<<b<<" "<<c<<endl;
           return 0;
}
