#include<iostream>
using namespace std;

class largest
{
    int a,b;
public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    int large()
    {
        if(a>b)
            return a;
        else
            return b;
    }
    void display()
    {
        cout<<"\nLargest number is "<<large()<<endl;
    }
};

int main()
{
    largest ob;
    int m,n;
    cout<<"Inter tow integer number: ";
    cin>>m>>n;
    ob.input(m,n);
    ob.large();
    ob.display();
    return 0;
}
