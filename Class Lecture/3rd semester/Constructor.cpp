#include<iostream>
using namespace std;
class intger
{
    int m,n;
public:
    intger(int ,int );
    void display()
    {
        cout<<" m = "<<m<<endl;
        cout<<" n = "<<n<<endl;
    }
};
intger::intger(int x,int y)
{
    m=x,n=y;
}

int main()
{
    intger int1(0,100); //constructor called implicitly
    intger int2=intger(25,75);//constructor called explicitly

    cout<<"\nOBJECT 1 "<<endl;
    int1.display();
    cout<<"\nOBJECT 2 "<<endl;
    int2.display();
    return 0;
}
