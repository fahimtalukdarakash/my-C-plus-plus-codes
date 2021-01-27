#include<iostream>
#include<string>
using namespace std;
class c1{
public:
           c1(string z)
           {
                      setname(z);
           }
           void setname(string x)
           {
                      name=x;
           }
           string getname()
           {
                      return name;
           }
private:
           string name;
};
int main()
{
           c1 b1("akash");
           cout<<b1.getname()<<endl;
           c1 b2("fahim");
           cout<<b2.getname()<<endl;
           cout<<b1.getname()<<endl;
           return 0;
}
