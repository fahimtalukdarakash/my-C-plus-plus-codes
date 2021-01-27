#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
           string str1;
           string str2;
           int i,len;
           cin>>str1;
           cin>>str2;
           char ch1[str1.size()+1];
           strcpy(ch1,str1.c_str());
           char ch2[str2.size()+1];
           strcpy(ch2,str2.c_str());
           for(i=0;i<strlen(ch1);i++)
           {
                      if(ch1[i]>='A' && ch1[i]<='Z')
                      {
                                 ch1[i]=ch1[i]+32;
                      }
           }
           for(i=0;i<strlen(ch2);i++)
           {
                      if(ch2[i]>='A' && ch2[i]<='Z')
                      {
                                 ch2[i]=ch2[i]+32;
                      }
           }
           std::string str3(ch1);
           std::string str4(ch2);
           if(str3==str4)
           {
                      cout<<0<<endl;
           }
           if(str3<str4)
           {
                      cout<<-1<<endl;
           }
           if(str4<str3)
           {
                      cout<<1<<endl;
           }
           return 0;
}
