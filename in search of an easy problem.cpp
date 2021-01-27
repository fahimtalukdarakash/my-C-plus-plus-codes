#include<iostream>
#include<cmath>
using namespace std;
int main()
{
           int n,i;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<n;i++)
           {
                      if(a[i]==0)
                      {
                                 if(i==n-1)
                                 {
                                            cout<<"EASY"<<endl;
                                 }
                      }
                      else
                      {
                                 cout<<"HARD"<<endl;
                                 break;
                      }
           }
           return 0;

}
