#include<iostream>
using namespace std;
class base
{
public:
    double height,width;

};
class rectangle:public base
{
public:
    rectangle(double H,double W)
    {
        height=H;
        width=W;
    }
    double area_of_rectangle()
    {
        return height*width;
    }

};
class isosceles:public base
{
public:
    isosceles(double H,double W)
    {
        height=H;
        width=W;
    }
    double area_of_isosceles()
    {
        return 0.5*height*height;
    }

};

class cylinder:public base
{
public:
    double r;
    cylinder(double h,double w,double R)
    {
        height=h;
        width=w;
        r=R;
    }
    double area_of_tringle()
    {
        return 3.1516*r*r*height;
    }

};

int main()
{
    rectangle ob1(2.2,3.3);
    isosceles ob2(3.3,4.4);
    cylinder ob3(4.4,5.5,2.2);
    cout<<"\nArea of rectangle = "<<ob1.area_of_rectangle()<<endl;
    cout<<"\nArea of isosceles = "<<ob1.area_of_rectangle()<<endl;
    cout<<"\nArea of cylinder = "<<ob1.area_of_rectangle()<<endl;
    return 0;
}
