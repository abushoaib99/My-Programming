//process shopping list
#include<iostream>
using namespace std;
int const m=50;
class items
{
    int itemcode[m];
    float itemprice[m];
    int count;
public:
    void cnt()
    {
        count=0;
    }
    void getitem();
    void displaysum();
    void remove();
    void displayitems();
};
void items::getitem()
{
    cout<<"Enter item code : "<<endl;
    cin>>itemcode[count];
    cout<<"Enter item cost : "<<endl;
    cin>>itemprice[count];
    count++;
}
void items::displaysum()
{
    float sum=0;
    for(int i=0;i<count;i++){
        sum+=itemprice[i];
    }
    cout<<"\nTotal value : "<<sum<<endl;
}
void items::remove()
{
    int a;
    cout<<"Enter item code : "<<endl;
    cin>>a;
    for(int i=0;i<count;i++){
        if(itemcode[i]==a)
            itemprice[i]=0;
    }
}
void items::displayitems()
    {
        cout<<"\nCode Price\n";
        for(int i=0;i<count;i++){
            cout<<"\n"<<itemcode[i];
            cout<<" "<<itemprice[i];
        }
        cout<<"\n";
    }
    int main()
    {
        items order;
        order.cnt();
        int x;
        while(x!=5){
            cout<<"\nYou can do the following;"<<"Enter appropriate number\n";
            cout<<"\n1 : Add an item ";
            cout<<"\n2 : Display total value";
            cout<<"\n3 : Delete an item";
            cout<<"\n4 : Display all items";
            cout<<"\n5 : Quit";
            cout<<"\n\nWhat is your potion?";

            cin>>x;

            switch(x)
            {
            case 1:
                order.getitem();
                break;
            case 2:
                order.displaysum();
                break;
            case 3:
                order.remove();
                break;
            case 4:
                order.displayitems();
                break;
            case 5:
                break;
            default:
                cout<<"Error in input; try again\n";
            }
        }
        return 0;
    }
