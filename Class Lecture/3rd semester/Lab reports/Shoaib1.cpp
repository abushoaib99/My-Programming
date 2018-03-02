#include<iostream>
using namespace std;
class ABC
{
    double a;
public:
    void input(double x)
    {
        a=x;
    }
    ABC operator+(ABC A)
    {
        ABC t;
        t.a=a+a;
        return t;
    }
    ABC operator-(ABC A)
    {
        ABC t;
        t.a=a-a;
        return t;
    }
    ABC operator*(ABC A)
    {
        ABC t;
        t.a=a*a;
        return t;
    }
    ABC operator/(ABC A)
    {
        ABC t;
        t.a=a/a;
        return t;
    }
    void display()
    {
        cout<<a<<endl;
    }
};

int main()
{
    ABC ob1,ob2,ob3,ob4,ob5,ob6;

    ob1.input(5.5);
    ob2.input(5.5);
    cout<<"Tow value are"<<endl;
    ob1.display();
    ob2.display();

    ob3=ob1+ob2;
    ob4=ob1-ob2;
    ob5=ob1*ob2;

    ob6=ob1/ob2;
    cout<<"\nAdd tow number = ";

    ob3.display();
     cout<<"Subtract tow number = ";

    ob4.display();
    cout<<"Multiply tow number = ";
    ob5.display();
    cout<<"Division tow number = ";
    ob6.display();
    return 0;
}
