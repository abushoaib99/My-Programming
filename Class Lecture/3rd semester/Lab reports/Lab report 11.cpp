#include<iostream>
using namespace std;
class complex
{
    int real,image;
public:
    void input(int REAL,int IMAGE)
    {
        real=REAL;
        image=IMAGE;
    }
    void display(complex);
    friend complex add(complex,complex);
    friend complex subtract(complex,complex);
};

complex add(complex ob1,complex ob2)
{
    complex ob;
    ob.real=ob1.real+ob2.real;
    ob.image=ob1.image+ob2.image;
    return ob;
}
complex subtract(complex ob1,complex ob2)
{
    complex ob;
    ob.real=ob1.real-ob2.real;
    ob.image=ob1.image-ob2.image;
    return ob;
}
void complex::display(complex c)
{
    cout<<"\nReal = "<<c.real<<endl;
    cout<<"Image = "<<c.image<<endl;
}

int main()
{
    complex A,B,C,C1;
    A.input(5.1,6.1);
    B.input(3.2,4.2);
    cout<<"Before add and subtract\n";
    A.display(A);
    B.display(B);
    cout<<"\nAfter add Real with real and image with image number\n";
    C=add(A,B);
    C.display(C);
    cout<<"\nAfter subtract Real with real and image with image number\n";
    C1=subtract(A,B);
    C1.display(C1);
    return 0;


}

