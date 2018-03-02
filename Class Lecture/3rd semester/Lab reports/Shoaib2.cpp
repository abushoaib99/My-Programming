#include<iostream>
using namespace std;

class bank_ac
{
    string de_name;
    int ac_no;
    string ac_type;
    double ac_balance;
    double total=0;
public:
    void getdata()
    {
        cout<<"\nEnter Account name: ";
        cin>>de_name;
        cout<<"Enter Account No.: ";
        cin>>ac_no;
        cout<<"Enter Account type: ";
        cin>>ac_type;
        cout<<"Enter Account Balance: ";
        cin>>ac_balance;
        total+=ac_balance;
    }
    void deposit()
    {
        string n,t;
        int A_N;
        double de_balance;
        cout<<"\nEnter account name: ";
        cin>>n;
        cout<<"Enter account No.: ";
        cin>>A_N;
        cout<<"Enter account type: ";
        cin>>t;
        if(de_name==n && ac_no==A_N && ac_type==t)
        {
            cout<<"\nEnter amount: ";
            cin>>de_balance;
            total+=de_balance;
            cout<<"\n\nDeposit successful"<<endl;
        }
        else
        {
            cout<<"\nAccount name or Account NO. or Account type not match"<<endl;
        }
    }
    void withdraw()
    {
        string n,t;
        int A_N;
        double de_balance;
        cout<<"\nEnter account name: ";
        cin>>n;
        cout<<"Enter account No.: ";
        cin>>A_N;
        cout<<"Enter account type: ";
        cin>>t;
        if(de_name==n && ac_no==A_N && ac_type==t)
        {
            cout<<"\nEnter amount: ";
            cin>>de_balance;
            total-=de_balance;
            cout<<"\n\nWithdraw successful"<<endl;
        }
        else
        {
            cout<<"Account name or Account NO. or Account type not match"<<endl;
        }
    }
    void display()
    {
        cout<<"\nAccount Name: "<<de_name<<endl;
        cout<<"\nCurrent Balance: "<<total<<endl;
    }

};

int main()
{
    bank_ac ob;
    ob.getdata();
    int m;
    while(m!=0)
    {
        cout<<"\nPress 1 for deposit"<<endl;
        cout<<"Press 2 for withdraw"<<endl;
        cout<<"Press 3 for display"<<endl;
        cout<<"Press 0 for exit"<<endl;
        cout<<"\nEnter your option: ";
        cin>>m;
        if(m==1)
        {
            ob.deposit();
        }
        else if(m==2)
        {
            ob.withdraw();
        }
        else if(m==3)
        {
            ob.display();
        }
        else if(m==0)
        {
            cout<<"\nThank you"<<endl;
            break;
        }
        else
            cout<<"\nInvalid,plz press given no."<<endl;
    }
    return 0;

}
