#include<iostream>
#include<cmath>
using namespace std;

class rectangle
{
    int x,y;
    int calculate()
    {
        return x*y;
    }
public:
    void input()
    {
        cout<<"Rectangle Height: ";
        cin>>x;
        cout<<"Rectangle Width: ";
        cin>>y;
        x=abs(x);
        y=abs(y);
    }
    void output()
    {
        cout<<"\nThe area of rectangle: "<<calculate()<<endl;
    }
};


int main()
{
    rectangle a;
    a.input();
    a.output();
    return 0;
}
