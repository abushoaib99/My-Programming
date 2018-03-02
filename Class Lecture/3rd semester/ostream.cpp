#include<iostream>
using namespace std;
class complex
{
    int x,y;
public:

    complex(int a,int b)
    {
        x=a;
        y=b;
    }
    friend void operator<<(ostream &os,complex ob)
    {
        os<<ob.x<<" "<<ob.y<<endl;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    complex A(5,6),B(3,4);
    cout<<B;

    return 0;
}


