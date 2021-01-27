#include<iostream>
using namespace std;
int main()
{
           int n;
           cin>>n;
           //if((n==4)||(n==7)||(n==44)||(n==77)||(n==47)||(n==74)||(n==444)||(n=477)||(n==447)||(n==474)||(n==744)||(n==777)||(n==747)||(n==774))
           if(n%4==0 || n%7==0 || n%44==0 || n%77==0 || n%47==0 || n%74==0)
           {
                      cout<<"YES"<<endl;
           }
           else if(n%444==0 || n%477==0 || n%447==0 || n%474==0)
           {
                      cout<<"YES"<<endl;
           }
           else if(n%744==0 || n%777==0 || n%747==0 || n%774==0)
           {
                      cout<<"YES"<<endl;
           }
           else
           {
                      cout<<"NO"<<endl;
           }
           return 0;
}
