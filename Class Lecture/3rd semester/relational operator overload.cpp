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
    bool operator < (complex);
    bool operator > (complex);
    bool operator == (complex);
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
bool complex::operator<(complex c)
{
    return (x+c.x)<(y+c.y);
}
bool complex::operator>(complex c)
{
    return (x+c.x)>(y+c.y);
}bool complex::operator==(complex c)
{
    return (x+c.x)>(y+c.y);
}
int main()
{
    complex A(1,1),B(3,1),C;
    C=A+B; //active operator+complex c)
    cout<<"C=";C.display();
    if(A<B)
        cout<<"B"<<endl;
    else if(A>B)
        cout<<"A"<<endl;
    else
        cout<<"A=B"<<endl;
    return 0;
}



