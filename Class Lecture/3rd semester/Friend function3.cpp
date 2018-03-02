//swapping private data of function using friend function
#include<iostream>
using namespace std;

class B;
class A
{
    int x;
public:
    void set(int X)
    {
        x=X;
    }
    void display()
    {
        cout<<"X = "<<x<<endl;
    }
    friend void swapping(A &,B &);
};

class B
{
    int y;
public:
    void set(int Y)
    {
        y=Y;
    }
    void display()
    {
        cout<<"Y = "<<y<<endl;
    }
    friend void swapping(A &,B &);
};

void swapping(A &a,B &b)
{
    a.x=a.x+b.y;
    b.y=a.x-b.y;
    a.x=a.x-b.y;
}

int main()
{
    A ob1;
    B ob2;
    ob1.set(5);
    ob2.set(10);
    cout<<"Before swapping"<<endl;
    ob1.display();
    ob2.display();
    swapping(ob1,ob2);
    cout<<"After swapping"<<endl;
    ob1.display();
    ob2.display();
    return 0;
}
