#include<bits/stdc++.h>
int main()
{
    char ch[105];
    int c=1,j=1;
    scanf("%s",ch);
    int len=strlen(ch);
    for(int i=0;i<len;i++)
    {
        if(ch[i]!='A' && ch[i]!='E' && ch[i]!='I' && ch[i]!='E' && ch[i]!='O' && ch[i]!='U' && ch[i]!='Y')
            c++;
        else
        {
            if(j<c)
                j=c;
            c=1;
        }
    }
    j<c ? printf("%d\n",c) : printf("%d\n",j);
    return 0;
}
