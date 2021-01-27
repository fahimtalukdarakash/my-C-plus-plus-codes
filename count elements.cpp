//#include<iostream>
#include<cstdio>
//using namespace std;
char s[]="This is a null-terminated string.";
const char string[]="This is a null-terminated string.";
int main()
{
           /* here this is runable when char isn't const*/
           int count=0;
           for(char *p=s; *p; ++p)
           {
                      count++;
           }
           printf("the number of character is %d\n",count);
           count=0;
           for(count=0;string[count];++count)
                      ;
           printf("the number of character is %d\n",count);
           count=0;
           while(string[count])
           {
                      ++count;
           }
           printf("the number of character is %d\n",count);
           count=0;
           for(int x:string)
           {
                      if(x==0) break;
                      ++count;
           }
           printf("the number of character is %d\n",count);
           return 0;
}
