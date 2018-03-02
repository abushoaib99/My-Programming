#include<iostream>
using namespace std;

class rec
{
public:
    int h=3,w=1;
    int area()
    {
        return h*w;
    }
};
int main()
{
    rec r;
    r.h;
    r.w;
    cout<<r.area();
}
