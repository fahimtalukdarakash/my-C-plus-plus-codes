#include<iostream>
#include<cstring>
using namespace std;
int main()
{
           int n,i,l[100];
           string temp[100];
           cin>>n;
           string str[100];
           for(i=0;i<n;i++){
           cin>>str[i];
           }
           for(i=0;i<n;i++)
           {
                      //l=strlen(str[i]);
                      temp=str[i];
                      l[i]=strlen(temp);
                      cout<<l[i]<<endl;
           }
}
