#include<iostream>
using namespace std;
int main()
{
           char ch[50];
           int i,n,c=0,d=0;
           cin>>n;
           cin>>ch;
           for(i=0;i<n-1;i++)
           {

                      if(ch[i]==ch[i+1])
                      {
                                 c++;
                      }
           }
           cout<<c<<endl;
           return 0;

}
