#include<iostream>
#include<cmath>
using namespace std;
int main()
{
           int n,i,j,l,d,k,temp,count1=0,count2=0;
           int a[4];
           cin>>n;
           while(n<=10000)
           //while(true)
           {
                      n++;
                      d=n;
                      for(i=0;i<4;i++)
                      {
                                 a[i]=d%10;
                                 d/=10;
                      }
                      for(i=0;i<=4-2;i++)
           {
                      for(k=i+1;k<=4-1;k++)
                                 if(a[i]<a[k])
                      {
                                 {
                                            temp=a[i];
                                            a[i]=a[k];
                                            a[k]=temp;
                                 }
                      }
           }
           for(i=0;i<3;i++)
           {
                      if(a[i]==a[i+1])
                      {
                                 count1++;
                      }
                      else
                      {
                                 count2++;
                      }

           }
           if(count2==3)
           {
                      cout<<n<<endl;
                      break;
           }
           else
           {
                      count2=0;
           }
           }
           return 0;
}
