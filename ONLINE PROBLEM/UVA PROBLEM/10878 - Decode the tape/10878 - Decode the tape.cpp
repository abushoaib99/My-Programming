#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    char ch[20],txt[10000];
    int i=0,tmp;
    while(gets(ch))
    {
        tmp=0;
        if(ch[1]=='o') tmp+=128;
        if(ch[2]=='o') tmp+=64;
        if(ch[3]=='o') tmp+=32;
        if(ch[4]=='o') tmp+=16;
        if(ch[5]=='o') tmp+=8;
        if(ch[7]=='o') tmp+=4;
        if(ch[8]=='o') tmp+=2;
        if(ch[9]=='o') tmp+=1;
        txt[i++]=(char)tmp;
    }
    printf("%s",txt+1);
    return 0;
}
