#include<iostream>
using namespace std;

class rec
{
public:
    int h=5,w=3;
    int area();
};
int rec::area()
{
    return h*w;
}
int main()
{
    rec r;
    cout<<r.area();
}
