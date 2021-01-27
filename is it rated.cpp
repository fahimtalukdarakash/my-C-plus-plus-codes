#include<iostream>
using namespace std;
int main()
{
           int n,i,j;
           cin>>n;
           int a[n][2];
           for(i=0;i<n;i++)
           {
                      for(j=0;j<2;j++)
                      {
                                 cin>>a[i][j];
                      }
           }
           for(i=0;i<n-1;i++)
           {
                      if((a[i][0]==a[i+1][0]) || (a[i][0]>a[i+1][0]))
                         {
                                    if(i==n-2)
                                    {
                                               cout<<"maybe"<<endl;
                                    }
                                    else
                                    {
                                               continue;
                                    }

                         }
                         //else if((a[i][0]>a[i][1])||(a[i][0]<a[i][1]))
                         else if((a[i][0]==a[i][1]))
                         {
                                    cout<<"unrated"<<endl;
                                    break;
                         }
                         else
                         {
                                     cout<<"rated"<<endl;
                                     break;
                         }

           }
}
