#include<iostream>
using namespace std;
int composite1(int num1);
int composite2(int num2);
int main()
{
           int n,a,b,i;
           cin>>n;
           if(n%2==0)
           {
                      a=n/2;
                      b=n/2;
                      cout<<a<<" "<<b<<endl;
           }
           else
           {
                      a=n/2;
                      b=(n/2)+1;
           a--;
           b++;
           int x=composite1(a);
           int y=composite2(b);
           if(x+y==n)
           {
                      cout<<x<<" "<<y<<endl;
           }
           else
           {
                      a=x--;
                      b=y++;
                      x=composite1(a);
                      y=composite2(b);
           }
           }
}
int composite1(int num1)
{
           int i,count1=0;
           for(i=2;i<num1;i++)
           {
                      if(num1%i==0)
                      {
                                 count1++;
                                 break;
                      }
           }
           if(count1>0)
           {
                      return num1;
           }
           else
           {
                      num1--;
                      composite1(num1);
           }
}
int composite2(int num2)
{
           int j,count2=0;
           for(j=2;j<num2;j++)
           {
                      if(num2%j==0)
                      {
                                 count2++;
                                 break;
                      }
           }
           if(count2>0)
           {
                      return num2;
           }
           else
           {
                      num2++;
                      composite2(num2);
           }
}
