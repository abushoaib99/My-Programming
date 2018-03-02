#include<iostream>
using namespace std;
class complex
{
    int x,y;
public:
    complex(){};
    complex(int a,int b)
    {
        x=a;
        y=b;
    }
    complex operator+(complex);
    void display()
    {
        cout<<x<<"+"<<y<<endl;
    }
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}
int main()
{
    complex A,B,C;
    A=complex(1,2);
    B=complex(3,4);
    C=A+B; //active operator-(complex c)
    cout<<"A=";A.display();
    cout<<"B=";B.display();
    cout<<"C=";C.display();
    return 0;
}


