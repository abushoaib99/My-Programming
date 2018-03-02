#include<bits/stdc++.h>
int main()
{
    char ch[10];
    int i=1;
    while(scanf("%s",ch))
    {
        if(strcmp(ch,"*")==0)
            break;
        else
        {
            if(strcmp(ch,"Hajj")==0)
                printf("Case %d: Hajj-e-Akbar\n",i);
            else
                printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
    return 0;
}
