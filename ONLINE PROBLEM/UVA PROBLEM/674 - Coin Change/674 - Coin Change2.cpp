#include <bits/stdc++.h>
using namespace std;
long ways [7490];
void countt()
{
    int coin[]= {1,5,10,25,50};
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
