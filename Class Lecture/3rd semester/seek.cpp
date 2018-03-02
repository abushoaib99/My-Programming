#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char s;
    cout<<"Enter a string\n";
    cin>>s;
    fstream file;
    file.open("TEXT.txt",ios::out|ios::in);

    while(!file){
        file.get(s);
    }

    file.seekg(0);

    char ch;
    while(!file)
    {
        file.get(ch);
        cout<<ch;
    }
    file.close();
    return 0;
}
