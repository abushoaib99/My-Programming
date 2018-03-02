#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,4> data_array1={10,20,30,40};
    array <int,4> data_array2={100,200,300,400};
    cout<<data_array1.at(3)<<endl;
    cout<<data_array2[3]<<endl;  //
    cout<<data_array1.front()<<endl;
    cout<<data_array1.back()<<endl;
    cout<<"Size is = "<<data_array1.size()<<endl;
    data_array1.swap(data_array2);
    for(int i=0;i<4;i++)
    {
        cout<<data_array1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<data_array2[i]<<" ";
    }

}
