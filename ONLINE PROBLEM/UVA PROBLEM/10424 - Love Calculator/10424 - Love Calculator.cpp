#include<bits/stdc++.h>
using namespace std;
int add(int n)
{
    int s=0,r;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    char ch1[30],ch2[30];
    int sum,sum1,sum2,a,b;
    float f;
    while(gets(ch1)&&gets(ch2))
    {
        sum=0;
        for(int i=0; i<strlen(ch1); i++)
        {
            if(islower(ch1[i]))
                sum+=(ch1[i]-97)+1;
            else if(isupper(ch1[i]))
                sum+=(ch1[i]-65)+1;

        }
        a=add(sum);
        while(a>9)
        {
            a=add(a);
        }
        sum=0;
        for(int i=0; i<strlen(ch2); i++)
        {
            if(islower(ch2[i]))
                sum+=(ch2[i]-97)+1;
            else if(isupper(ch2[i]))
                sum+=(ch2[i]-65)+1;

        }
        b=add(sum);
        while(b>9)
        {
            b=add(b);
        }
        if(a>b)
            swap(a,b);
        f=float(a*100)/float(b);
        printf("%.2f %%\n",f);
    }
    return 0;
}
