#include<iostream>
using namespace std;
float total_price=0.0;

class items
{
public:
    string item_name;
    int item_code;
    double item_price;

    int item_input()
    {
    cout<<"\nEnter item name: ";
    cin>>item_name;
    cout<<"Enter item code: ";
    cin>>item_code;
    cout<<"Enter item price: ";
    cin>>item_price;
    }

    void add_item()
    {
        total_price+=item_price;
    }

};

int main()
{
    items ob[100];
    int m,count[1000]={0},count1[100]={0},count2=0;
    int i=0;
    while(m!=4){
        cout<<"\n\nEnter 1 for insert item.";
        cout<<"\nEnter 2 for remove an item.";
        cout<<"\nEnter 3 for Show all items & Total price.";
        cout<<"\nEnter 4 for exit.";
        cout<<"\n\nEnter your option: ";
        cin>>m;
        if(m==1){
            count2++;
            ob[i].item_input();
            count1[i]=1;
            count[i]=i;
            ob[i].add_item();
        }
        else if(m==2){
            count2--;

            if(count2<0){
                cout<<"\nList is empty"<<endl;
                count2=0;
            }

            else{
                int a;
            cout<<"Enter item code for remove: ";
            cin>>a;
        for(int j=0;j<i;j++){
        if(ob[j].item_code==a){
            total_price-=ob[j].item_price;
            ob[j].item_price=0;
            }
        }

        }

        }

        else if(m==3){
            if(count2<=0)
                cout<<"\nList is empty"<<endl;
        else{
            int k=0;
                cout<<"\nName\tcode\tprice\n";
                for(int j=0;j<i;j++,k++){
                    if(ob[j].item_price!=0 && count1[k]==1 && j==count[k])
                    cout<<ob[j].item_name<<"\t"<<ob[j].item_code<<"\t"<<ob[j].item_price<<endl;
                }
                cout<<"\n________________________\n";
                cout<<"Total Price = "<<total_price<<endl;
        }
        }
        else if(m==4)
            break;
        else
            cout<<"\nEnter wrong option. Plz select given option"<<endl;
        i++;
    }
    return 0;
}

