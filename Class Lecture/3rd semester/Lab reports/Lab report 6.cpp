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
    complex operator-(complex);
    void display()
    {
        cout<<x<<"+"<<y<<endl;
    }
};

complex complex::operator+(complex z)
{
    complex temp1;
    temp1.x=x+z.x;
    temp1.y=y+z.y;
    return temp1;
}

complex complex::operator-(complex c)
{
    complex temp;
    temp.x=x-c.x;
    temp.y=y-c.y;
    return temp;
}

int main()
{
    complex A,B,C,C1;
    A=complex(4,3);
    B=complex(2,1);
    C=A+B;  //active operator+(complex c)
    C1=A-B; //active operator-(complex c)
    cout<<"A = ";A.display();
    cout<<"B = ";B.display();
    cout<<"A+B = ";C.display();
    cout<<"A-B = ";C1.display();
    return 0;
}



