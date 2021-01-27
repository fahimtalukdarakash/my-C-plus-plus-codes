#include<iostream>
#include<cstring>
using namespace std;
int main()
{
           char ch[100];
           int l;
           int i,n;
           cin>>n;
           for(i=0;i<n;i++){
           cin>>ch;
           l=strlen(ch);
           if(l>10){
              cout<<ch[0]<<l-2<<ch[l-1]<<endl;
           }
           else
           {
                      cout<<ch<<endl;
           }
           }
           return 0;
}
