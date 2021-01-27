#include<iostream>
#include<cstring>
using namespace std;
int main()
{
           char ch[100000];
           int n,i,count1=0,count2=0;
           cin>>n;
           cin>>ch;
           int l=strlen(ch);
           for(i=0;i<l;i++)
           {
                      if(ch[i]=='A')
                      {
                                 count1++;
                      }
                      if(ch[i]=='D')
                      {
                                 count2++;
                      }
           }
           if(count1>count2)
           {
                      cout<<"Anton"<<endl;
           }
           if(count2>count1)
           {
                      cout<<"Danik"<<endl;
           }
           if(count1==count2)
           {
                      cout<<"Friendship"<<endl;
           }
           return 0;
}
