#include<iostream>
using namespace std;
class time
{
    int hour,minute,second;
public:
    void input(int HOUR,int MINUTE,int SECOND)
    {
        hour=HOUR;
        minute=MINUTE;
        second=SECOND;
    }
    void multiply(time t1,time t2)
    {
        hour=t1.hour*t2.hour;
        minute=t1.minute*t2.minute;
        second=t1.second*t2.second;
    }
    void display()
    {
        cout<<"Time is: "<<hour<<":"<<minute<<":"<<second<<endl;
    }
};

int main()
{
    time ob1,ob2,ob3;
    ob1.input(2,8,10);
    ob2.input(3,4,6);
    cout<<"Tow time are\n";
    ob1.display();
    ob2.display();
    cout<<"\nTime after multiply\n";
    ob3.multiply(ob1,ob2);
    ob3.display();
    return 0;
}

