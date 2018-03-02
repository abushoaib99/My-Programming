#include<iostream>
using namespace std;

class shape
{
public:
    int volume(int a)
    {
        return a*a*a;
    }
    double volume(double r,double h)
    {
        return 3.1416*r*r*h;
    }
    int volume(int h,int w)
    {
        return h*w;
    }
};

int main()
{
    shape ob;
    cout<<"Volume of Cube = "<<ob.volume(2)<<endl;
    cout<<"Volume of Cylinder = "<<ob.volume(1.5,2.5)<<endl;
    cout<<"Volume of Rectangle = "<<ob.volume(2,3)<<endl;
    return 0;
}
