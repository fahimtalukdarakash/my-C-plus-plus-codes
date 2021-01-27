#include<iostream>
#include<cstring>
using namespace std;
int main()
{
           char ch[100];
           int i,len,count1=0,count2=0;
           cin>>ch;
           len=strlen(ch);
           for(i=0;i<len;i++)
           {
                      if(ch[i]=='0')
                      {
                                 count1++;
                                 if(count1>=7)
                                 {
                                            break;
                                 }
                      }
                      else
                      {
                                 count1=0;
                      }
                      if(ch[i]=='1')
                      {
                                 count2++;
                                 if(count2>=7)
                                 {
                                            break;
                                 }
                      }
                      else
                      {
                                 count2=0;
                      }
           }
           if((count1>=7) || (count2>=7))
           {
                      cout<<"YES"<<endl;
           }
           else
           {
                      cout<<"NO"<<endl;
           }
}
