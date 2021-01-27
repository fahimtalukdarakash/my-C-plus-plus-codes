#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
           char str1[100],str2[100];
           int len,i,j=0;
           cin>>str1;
           len=strlen(str1);
           for(i=0;i<len;i++)
           {
                      if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='y'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U'||str1[i]=='Y')
                      {
                                 str1[i]=' ';
                      }
                      else
                      {
                                 str2[j++]=str1[i];
                      }
           }
           str2[j]='\0';
           //cout<<str2<<endl;
           len=strlen(str2);
           //cout<<len<<endl;
           //cout<<len<<endl;
           for(i=0;i<len;i++)
           {
                      if(str2[i]>='A' && str2[i]<='Z')
                      {
                                 str2[i]=str2[i]+32;
                      }
           }
           //cout<<str2<<endl;
           for(i=0;i<len;i++)
           {
                      cout<<"."<<str2[i];
           }
           cout<<endl;
           return 0;
}
