#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outf("ITEM.txt");
    cout<<"Enter item name: ";
    char name[30];
    cin>>name;
    outf<<"Item name: "<<name<<endl;
    cout<<"Enter item cost: ";
    float cost;
    cin>>cost;
    outf<<"Item cost: "<<cost<<endl;
    outf.close();
    cout<<endl;
    cout<<"Item name: "<<name<<endl;
    cout<<"Item cost: "<<cost<<endl;

    return 0;

}
