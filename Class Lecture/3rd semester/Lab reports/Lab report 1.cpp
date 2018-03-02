#include<iostream>
using namespace std;
class information
{
    string n,v,sd,d,div,c;
public:
    void store(string N="Mohammad Abu Shoaib",string V="Rosullahbad",string SD="Nabinagar",string D="Comilla",string DIV="Chitagong",string C="Bangladesh")
    {
        n=N;
        v=V;
        sd=SD;
        d=D;
        div=DIV;
        c=C;
    }
    void display()
    {
        cout<<"Name: "<<n<<endl;
        cout<<"Village: "<<v<<endl;
        cout<<"Sub District: "<<sd<<endl;
        cout<<"District: "<<d<<endl;
        cout<<"Division: "<<div<<endl;
        cout<<"Country: "<<c<<endl;
    }
};

int main()
{
    information ob;
    ob.store();
    ob.display();
    return 0;
}
