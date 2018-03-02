#include<iostream>
using namespace std;

class student
{
protected:
    string n;
    int id;
public:
    void input(string N,int ID)
    {
        n=N;
        id=ID;
    }
    void dis()
    {
        cout<<"\nName: "<<n<<"\nID: "<<id<<endl;
    }
};

class Incourse_exam:virtual public student
{
protected:
    int I_number;
public:
    void get(int i_num)
    {
        I_number=i_num;
    }
    void show()
    {
        cout<<"\nIncourse exam number = "<<I_number<<endl;
    }
};
class Final_exam:virtual public student
{
protected:
    int F_number;
public:
    void getdata(int f_num)
    {
        F_number=f_num;
    }
    void showdata()
    {
        cout<<"\nFinal exam number = "<<F_number<<endl;
    }
};

class Result:public Incourse_exam,public Final_exam
{
public:
    void display()
    {
        cout<<"\n\nTotal number of All exam = "<<I_number+F_number<<endl;
    }

};

int main()
{
    Result ob;
    ob.input("NISHAD",1546);
    ob.dis();
    ob.get(350);
    ob.getdata(400);
    ob.show();
    ob.showdata();
    ob.display();
    return 0;
}
