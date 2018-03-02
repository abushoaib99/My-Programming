#include<bits/stdc++.h>
using namespace std;
int main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string week[8]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    string name_of_month[13]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int date,mon,year,s;
    while(scanf("%d%d%d",&mon,&date,&year)&&(mon+date+year))
    {
        s=0;
        if((year%400==0) || ((year%4==0 ) && (year%100!=0)))
            month[1]=29;
        for(int i=0;i<mon-1;i++)
            s+=month[i];
        s=s+(date+year+(year/4)-2);
        s=s%7;
        printf("%s %d, %d is a %s\n",name_of_month[mon-1].c_str(),date,year,week[s].c_str());
    }
    return 0;
}
