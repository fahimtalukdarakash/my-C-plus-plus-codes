#include<iostream>
using namespace std;
int main()
{
           int n,t,i,temp,j;
           cin>>n>>t;
           char ch[n];
           cin>>ch;
           for(j=0;j<t;j++)
           {
           for(i=0;i<n-1;i++)
           {
                      if(ch[i]=='B' && ch[i+1]=='G')
                      {
                                 ch[i]='G';
                                 ch[i+1]='B';
                                 i++;
                      }
           }
           }
           cout<<ch<<endl;
}
