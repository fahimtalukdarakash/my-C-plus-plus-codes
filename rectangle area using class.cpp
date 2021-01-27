#include<iostream>
#include<iomanip>
using namespace std;
class rectangle
{
protected:
           int width;
           int height;
public:
           void setdata(int h, int w)
           {
                      width=w;
                      height=h;
           }
           void showdata()
           {
                      cout<<width<<" ";
                      cout<<height<<endl;
           }
           void getdata()
           {
                      cin>>width>>height;
                      setdata(height,width);
           }
};
class RectangleArea : public rectangle{
public:
           int area(){
                      return width*height;

           }

};
int main()
{
           RectangleArea r;
           r.getdata();
           r.showdata();
           cout<<r.area()<<endl;
           return 0;
}
