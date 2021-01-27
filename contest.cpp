#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
           int a,b,c,d;
           cin>>a>>b>>c>>d;
           int e1=(3*a)/10;
           int e2=(3*b)/10;
           int f1=a-a/250*c;
           int f2=b-b/250*d;
           int g1=std::max(e1,f1);
           int g2=std::max(e2,f2);
           if(g1>g2)
           {
                      cout<<"Misha"<<endl;
           }
           else if(g1<g2)
           {
                      cout<<"Vasya"<<endl;
           }
           else
           {
                      cout<<"Tie"<<endl;
           }
           return 0;
}
