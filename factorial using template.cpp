#include<iostream>
using namespace std;
template<typename T>
T fact(T a)
{
           T m=1;
           for(int i=1;i<=a;i++)
           {
                      m*=i;
           }
           return m;
}
int main()
{
           cout<< fact<int>(5)<<endl;
           return 0;
}
