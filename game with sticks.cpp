#include<iostream>
using namespace std;
int main()
{
           int i,j,count=0;
           cin>>i>>j;
           while(i!=0 && j!=0)
           {
                      i--;
                      j--;
                      count++;
           }
           if(count%2==0)
           {
                      cout<<"Malvika"<<endl;
           }
           else
           {
                      cout<<"Akshat"<<endl;
           }
           return 0;
}
