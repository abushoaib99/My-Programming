#include<iostream>
using namespace std;

template<class T1,class T2>
class A
{
    T1 a;
    T2 b;
public:
    A(){}
    A(T1 x,T2 y){a=x;b=y;}
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    A <int,string> ob(5,"Abu Shoaib");
    ob.display();
    A <double,int> ob1(5.5,6);
    ob1.display();
    A <string,int> ob2("Abu Shoaib",5);
    ob2.display();
    return 0;
}
