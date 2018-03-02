#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output1.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b,f;
        char ch[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        scanf("%d %d",&a,&b);
        printf("Case %d:",i);
        printf("\n");

        do
        {
            for(int j=0;j<a;j++)
            {
                printf("%c",ch[j]);
            }
            printf("\n");
            b--;
        }while(next_permutation(ch,ch+a) && b!=0);
    }
    return 0;
}
