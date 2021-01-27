#include<iostream>
using namespace std;
int main()
{
           int a[5][5];
           int i,j,count,count1=0,count2=0,m,n;
           for(i=0;i<5;i++)
           {
                      for(j=0;j<5;j++)
                      {
                                 cin>>a[i][j];
                      }
           }
           for(i=0;i<5;i++)
           {
                      for(j=0;j<5;j++)
                      {
                                 if(a[i][j]==1)
                                 {
                                            m=i+1;
                                            n=j+1;
                                            break;
                                 }
                      }
           }
           if(m<3)
           {
                      for(i=m;i<3;i++)
                      {
                                 count1++;
                      }
           }
           if(m>3)
           {
                      for(i=m;i>3;i--)
                      {
                                 count1++;
                      }
           }
           if(n<3)
           {
                      for(i=n;i<3;i++)
                      {
                                 count2++;
                      }
           }
           if(n>3)
           {
                      for(i=n;i>3;i--)
                      {
                                 count2++;
                      }
           }
           count=count1+count2;
           cout<<count<<endl;
           return 0;
}
