#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10]="hello",c;
    int i=0;
    while(scanf("%c",&c) && c!='\n')
    {
        if(c==ch[i])
        {
            i++;
        }
    }
    if(i==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
