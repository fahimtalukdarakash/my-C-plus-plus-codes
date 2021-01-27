#include<iostream>
#include<string>
#include<iomanip>
#define SIZE 200000
using namespace std;
int main()
{
           int n,i;
           string str;
           double sum=0;
           cin>>n;
           for(i=0;i<n;i++)
           {
                      cin>>str;
                                 if(str=="Tetrahedron")
                                 {
                                            sum=sum+4;
                                 }
                                 if(str=="Cube")
                                 {
                                            sum=sum+6;
                                 }
                                 if(str=="Octahedron")
                                 {
                                            sum=sum+8;
                                 }
                                 if(str=="Dodecahedron")
                                 {
                                            sum=sum+12;
                                 }
                                 if(str=="Icosahedron")
                                 {
                                            sum=sum+20;
                                 }
           }
           std::cout<<std::setprecision(15)<<sum<<endl;
           return 0;
}
