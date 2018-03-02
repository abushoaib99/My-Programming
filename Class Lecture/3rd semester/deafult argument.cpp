#include<iostream>
using namespace std;

void color(string c="white")
{
    cout<<"Yahoo!!! your color is "<<c<<endl;
}
int main()
{
    color();
    color("black");
    color("green");
    color("blue");
    color("red");
    return 0;
}
