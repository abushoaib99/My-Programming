#include<bits/stdc++.h>
using namespace std;
bool prim(int n)
{
    int p=sqrt(n);
    for(int i=2;i<=p;++i)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    char ch[50];
    int n;
    while(gets(ch))
    {
        n=0;
        for(int i=0;i<strlen(ch);i++)
        {
            if(islower(ch[i]))
                n=n+(ch[i]-'a'+1);
            else
                n=n+(ch[i]-'A'+27);
        }
        if(prim(n))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
