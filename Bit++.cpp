#include<iostream>
#include<cstring>
using namespace std;
int main()
{
           char ch1[4];
           int i,x,n,j;
           cin>>n;
           x=0;
           for(i=1;i<=n;i++)
           {
                      cin>>ch1;
                      for(j=0;j<=0;j++)
                      {
                                 if(ch1[j]=='+' && ch1[j+1]=='+' && ch1[j+2]=='X')
                                 {
                                            ++x;
                                 }
                                  if(ch1[j]=='X' && ch1[j+1]=='+' && ch1[j+2]=='+')
                                 {
                                            x++;
                                 }
                                  if(ch1[j]=='-' && ch1[j+1]=='-' && ch1[j+2]=='X')
                                 {
                                            --x;
                                 }
                                  if(ch1[j]=='X' && ch1[j+1]=='-' && ch1[j+2]=='-')
                                 {
                                            x--;
                                 }
                      }
           }
           cout<<x<<endl;
           return 0;
}
