#include<iostream>
using namespace std;
template <class X,class Y>
X add(X a,Y b)
{
    return a+b;
}
int main()
{
    int a=5,b=5;
    cout<<add(a,b)<<endl;
    double c=5.5,d=5.5;
    cout<<add(c,d)<<endl;
    string e="Abu ",f="Shoaib";
    cout<<add(e,f)<<endl;
    return 0;
}

