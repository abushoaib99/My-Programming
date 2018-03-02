#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Country.txt");
    fout<<"United states of America\n";
    fout<<"United Kingdom\n";
    fout<<"South Korea\n";

    fout.close();

    fout.open("Capital.txt");
    fout<<"Washington D C\n";
    fout<<"London\n";
    fout<<"Seoul\n";

    fout.close();

    int N=80;
    char line[N];
    ifstream fin;
    fin.open("Country.txt");
    cout<<"Contents of country file\n\n";

    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<endl;
    }
    fin.close();

    fin.open("Capital.txt");
    cout<<"\nContents of capital file\n\n";

    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}
