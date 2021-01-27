#include<iostream>
using namespace std;
int main()
{
           char ch[3][3];
           int i,j;
           for(i=0;i<3;i++)
           {
                      for(j=0;j<3;j++)
                      {
                                 cin>>ch[i][j];
                      }
           }
           if(ch[0][0]==ch[2][2] && ch[0][1]==ch[2][1] && ch[0][2]==ch[2][0] && ch[1][0]==ch[1][2])
           {
                      cout<<"YES"<<endl;
           }
           else
           {
                      cout<<"NO"<<endl;
           }
           return 0;
}
