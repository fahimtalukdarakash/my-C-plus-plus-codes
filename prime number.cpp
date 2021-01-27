#include<iostream>
using namespace std;
int prime(int n)
{
       bool ip=true;
       for(int i=2;i<=n/2;i++)
       {
                  if(n%i==0)
                  {
                             ip=false;
                             break;
                  }
       }
       return ip;
}
int main()
{
           bool ip;
           for(int n=2;n<=100;n++)
           {
                  ip=prime(n);
                  if(ip==true)
                  {
                             cout<<n<<" ";
                  }
           }
           cout<<endl;
           return 0;
}
