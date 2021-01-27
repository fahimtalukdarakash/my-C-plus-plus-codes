 #include<iostream>
 using namespace std;
 class c1{
           int i=0;
public:
           void setvalue(int value);
           int getvalue();
 };
 void c1::setvalue(int value){
           i=value;
 }
 int c1::getvalue()
 {
            return i;
 }
 int main()
 {
            c1 o1;
            int i=47;
            o1.setvalue(i);
            cout<<o1.getvalue()<<endl;
 }
