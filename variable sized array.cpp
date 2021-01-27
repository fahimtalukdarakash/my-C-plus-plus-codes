#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iostream>
#define MAX 1000
using namespace std;
int main()
{
           int n,q,i,j,a,r,s;
           cin>>n>>q;
           int b[MAX][MAX];
           for(i=0;i<n;i++)
           {
                      cin>>a;
                      for(j=0;j<a;j++)
                      {
                                 cin>>b[i][j];
                      }
           }
           for(i=0;i<q;i++)
           {
                      cin>>r>>s;
                      cout<<b[r][s]<<endl;
           }
           return 0;
}
