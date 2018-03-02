//find max value of 2 classes using friend function
#include<iostream>
using namespace std;

class ABC;
class XYZ
{
    int x;
public:
    void set(int X)
    {
        x=X;
    }
    friend void max(ABC,XYZ);
};

class ABC
{
    int a;
public:
    void set(int A)
    {
        a=A;
    }
    friend void max(ABC,XYZ);
};

void max(ABC ob1,XYZ ob2)
{
    if(ob1.a>=ob2.x)
        cout<<ob1.a;
    else
        cout<<ob2.x;
}

int main()
{
    ABC abc;
    abc.set(50);
    XYZ xyz;
    xyz.set(10);
    max(abc,xyz);
    return 0;
}
