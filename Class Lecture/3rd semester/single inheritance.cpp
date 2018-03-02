#include<iostream>
using namespace std;
class A
{
public:
    int a=5,b=6;
};
class B:public  A
{
public:
    void display()
    {
        cout<<a*b<<endl;
    }
};
int main()
{
    B ob;
    ob.display();
}
