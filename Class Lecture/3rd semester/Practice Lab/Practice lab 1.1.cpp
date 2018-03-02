#include<iostream>
using namespace std;

class P4
{
    float clk_speed;
    int cache,lithography,architecture;
public:
    P4(float CLOCK=0.0,int CACHE=0,int LIGHO=0,int ARCHI=0)
    {
        clk_speed=CLOCK;
        cache=CACHE;
        lithography=LIGHO;
        architecture=ARCHI;
    }
    void display(){
        cout << "Clock: " << clk_speed << "GHz" << endl;
        cout << "Cache: " << cache << "KB" << endl;
        cout << "Lithography: " << lithography << "nm" << endl;
        cout << "Architecture: " << architecture << "bit" << endl;
    }
};

class P23:public P4
{
    float clk2;
    int cache2,lithography2,architecture2;
public:
    P23(float CLOCK2=0.0,int CACHE2=0,int LIGHO2=0,int ARCHI2=0)
    {
        clk2=CLOCK2;
        cache2=CACHE2;
        lithography2=LIGHO2;
        architecture2=ARCHI2;
    }
    void display(){
        cout << "Clock: " << clk2 << "GHz" << endl;
        cout << "Cache: " << cache2 << "KB" << endl;
        cout << "Lithography: " << lithography2 << "nm" << endl;
        cout << "Architecture: " << architecture2 << "bit" << endl;
    }

};

class SX :public P4
{
    float clk3;
    int cache3,lithography3,architecture3;
public:
    SX(float CLOCK3=0.0,int CACHE3=0,int LIGHO3=0,int ARCHI3=0)
    {
        clk3=CLOCK3;
        cache3=CACHE3;
        lithography3=LIGHO3;
        architecture3=ARCHI3;
    }
    void display(){
        cout << "Clock: " << clk3 << "GHz" << endl;
        cout << "Cache: " << cache3 << "KB" << endl;
        cout << "Lithography: " << lithography3 << "nm" << endl;
        cout << "Architecture: " << architecture3 << "bit" << endl;
    }

};

class computer
{
    int RAM,HDD;
    SX CPU;
public:
    void input(SX c,int r,int h)
    {
        CPU=c;
        RAM=r;
        HDD=h;
    }
    void output(){
        cout << "Computer Specification: " << endl;
        cout << "=========================================" << endl;
        cout << "CPU Configuration: " << endl;
        CPU.display();
        cout << "Primary Memory / RAM: " << RAM << "GB" << endl;
        cout << "Secondary Memory / HDD: " << HDD << "GB" << endl;
        cout << "=========================================" << endl;
    }
};

int main()
{
    P4 x(0.033, 8, 60, 32);
    P23 y(0.12,8,55,32);
    SX z(0.05,8,50,32);
    computer my;
    my.input(z,4,500);
    my.output();
}
