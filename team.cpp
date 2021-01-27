#include<iostream>
using namespace std;
int main()
{
           int a,b,c,l,n;
           cin>>n;
           l=0;
           for(int i=1;i<=n;i++)
           {
                      cin>>a>>b>>c;
                      if(((a==0)&&(b==1)&&(c==1))||((a==1)&&(b==0)&&(c==1))||((a==1)&&(b==1)&&(c==0))||((a==1)&&(b==1)&&(c==1)))
                      {
                                 l=l+1;
                      }
           }
           cout<<l<<endl;
           return 0;
}
