#include<iostream>
using namespace std;

float space(float x,float y)
{
    return x*y;
}
int space(int x,int y,int z)
{
    return x*y*z;
}

int main()
{
    cout<<space(3.3,4)<<endl;
    cout<<space(3,2,5)<<endl;
    return 0;
}
