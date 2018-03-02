#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    float total=0;
    for(int i=211;i<=219;i++)
    {
        cout<<"   "<<i<<" : ";
        cin>>s;
        float Gi, CiGi;
        if(s=="A+")      Gi = 4.00;
        else if(s=="A")  Gi = 3.75;
        else if(s=="A-") Gi = 3.50;
        else if(s=="B+") Gi = 3.25;
        else if(s=="B")  Gi = 3.00;
        else if(s=="B-") Gi = 2.75;
        else if(s=="C+") Gi = 2.50;
        else if(s=="C")  Gi = 2.25;
        else if(s=="D")  Gi = 2.00;

        if(i==212 || i==215 || i==218) CiGi = Gi * 1.5;
        else  CiGi = Gi * 3;

        total += CiGi;
    }
    printf("\n\n   GPA = %.2f\n", total/22.5);
    return 0;
}

