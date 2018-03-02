#include<iostream>
using namespace std;
int main()
{
    int size =20;
    char city[20];
    cout<<"Enter city name: ";
    cin>>city;
    cout<<"City name: "<<city<<endl;

    cout<<"\nEnter city name again: ";
    cin.getline(city,size);
    cout<<"\nCity name now: "<<city<<endl;

    cout<<"\nEnter another city name: ";
    cin.getline(city,size);
    cout<<"New city name: "<<city<<"\n\n";

    return 0;
}
