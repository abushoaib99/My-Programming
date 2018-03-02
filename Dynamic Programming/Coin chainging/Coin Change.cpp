#include <bits/stdc++.h>
using namespace std;
int ways [7490];
void countt()
{
    int coin[]={5,8,11,15,18};
    ways[0]=1;
    for(int i=0; i<5; i++)
    {
        for(int j=coin[i]; j<7490; j++)
            ways[j]+=ways[j-coin[i]];

    }

}
int main ()
{
    countt();
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",ways[n]);
    return 0;
}
