#include<iostream>
#include<stdio.h>
using namespace std;

class items
{
public:
    int item_code,cout=0;
    string item_name;
    double item_price;
    void item_input()
    {
    printf("Enter item name: ");
    cin>>item_name;
    printf("Enter item code: ");
    cin>>item_code;
    printf("Enter item price: ");
    cin>>item_price;
    }
    void display(float m)
    {
        printf("\n\nTotal Price = %.2f\n",m);
    }
};

int main()
{
    items ob[100],ob1;
    int m;
    float total_price=0;
    int i=0;
    while(m!=5){
        cout<<"\n\nEnter 1 for insert item ";
        cout<<"\nEnter 2 for remove item ";
        cout<<"\nEnter 3 for Total price ";
        cout<<"\n";
        cin>>m;
        if(m==1){
            ob[i].item_input();
            total_price+=ob[i].item_price;
        }
        else if(m==2){
            int a;
            cout<<"Enter item code for remove: ";
            cin>>a;

        for(int j=0;j<i;j++){
        if(ob[j].item_code==a)
            total_price-=ob[j].item_price;
        }
        }
        else if(m==3){
            ob1.display(total_price);
        }
        i++;
    }


}
