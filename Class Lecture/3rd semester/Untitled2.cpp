#include<iostream>

using namespace std;

class rec
{
public:
    int h=4,w=5;
};
int main()
{
    rec r;
    r.h;
    r.w=4;
    cout<<r.h*r.w;
}
