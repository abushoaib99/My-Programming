#include<iostream>
using namespace std;
class complex
{
    int x,y;
public:
    void getdata(int a,int b)
    {
        x=a;
        y=b;
    }
    friend complex sum(complex ,complex);
    void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
void complex::show(complex c)
{
    cout<<c.x<<"+j"<<c.y<<endl;
}
int main()
{
    complex A,B,C;
    A.getdata(1,2);
    B.getdata(3,4);
    C=sum(A,B);
    cout<<"A = ";A.show(A);
    cout<<"B = ";B.show(B);
    cout<<"C = ";C.show(C);
    return 0;
}
