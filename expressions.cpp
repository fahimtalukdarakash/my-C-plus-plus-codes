#include<iostream>
using namespace std;
int main()
{
           int a,b,c,i,temp,j;
           int numb[6];
           cin>>a;
           cin>>b;
           cin>>c;
           numb[0]=a+b*c;
           numb[1]=a*(b+c);
           numb[2]=a*b*c;
           numb[3]=(a+b)*c;
           numb[4]=a*b+c;
           numb[5]=a+b+c;
           for(i=0;i<=6-2;i++)
           {
                      for(j=i+1;j<=6-1;j++)
                                 if(numb[i]<numb[j])
                      {
                                 {
                                            temp=numb[i];
                                            numb[i]=numb[j];
                                            numb[j]=temp;
                                 }
                      }
           }
           cout<<numb[0]<<endl;
           return 0;
}
