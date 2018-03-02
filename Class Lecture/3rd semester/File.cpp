#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("File.txt");
    fout<<"Hello world";
    fout.close();
    ifstream fin;
    char ch;
    fin.open("File.txt");
    fin.get(ch);
    while(!fin.eof())
    {

        cout<<ch;
        fin.get(ch);
    }
    fin.close();
    return 0;

}
