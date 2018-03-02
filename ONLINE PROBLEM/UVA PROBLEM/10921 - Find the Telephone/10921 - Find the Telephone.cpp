#include<bits/stdc++.h>
int main()
{
    char ch[50];
    while(scanf("%s",ch)!=EOF)
    {
        for(int i=0;i<strlen(ch);i++)
        {
            if(ch[i]=='A' || ch[i]=='B' || ch[i]=='C')
                ch[i]='2';
            else if(ch[i]=='D' || ch[i]=='E' || ch[i]=='F')
                ch[i]='3';
            else if(ch[i]=='G' || ch[i]=='H' || ch[i]=='I')
                ch[i]='4';
            else if(ch[i]=='J' || ch[i]=='K' || ch[i]=='L')
                ch[i]='5';
            else if(ch[i]=='M' || ch[i]=='N' || ch[i]=='O')
                ch[i]='6';
            else if(ch[i]=='P' || ch[i]=='Q' || ch[i]=='R' || ch[i]=='S')
                ch[i]='7';
            else if(ch[i]=='T' || ch[i]=='U' || ch[i]=='V')
                ch[i]='8';
            else if(ch[i]=='W' || ch[i]=='X' || ch[i]=='Y' || ch[i]=='Z')
                ch[i]='9';
        }
        printf("%s\n",ch);
    }
    return 0;

}
