#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    float height[4]={175.5,153.0,152.25,167.20};
    ofstream outfile;
    outfile.open("Filename.txt",ios::binary);

    outfile.write((char *)& height,sizeof(height));
    outfile.close();

    for(int i=0;i<4;i++){
        height[i]=0;
    }
    ifstream infile;
    infile.open("Filename.txt",ios::binary);
    infile.read((char *)&height,sizeof(height));
    for(int i=0;i<4;i++)
    {
        cout.setf(ios::showpoint);
        cout<<setw(10)<<setprecision(2)<<height[i]<<endl;
    }
    infile.close();
    return 0;

}
