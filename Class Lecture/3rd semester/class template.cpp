#include<iostream>
using namespace std;

template<class T>
class A
{
    T a;
public:
    A(){}
    A(T x){a=x;}
    void display()
    {
        cout<<a<<endl;
    }
};

int main()
{
    A <int> ob(5);
    ob.display();
    A <double> ob1(5.5);
    ob1.display();
    A <string> ob2("Abu Shoaib");
    ob2.display();
    return 0;
}
