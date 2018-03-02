#include<bits/stdc++.h>
using namespace std;
int g[10001];
bool a[10001];
void grandy()
{
    int j;
    memset(g,0,sizeof g);
    for(int i=3;i<10001;i++)
    {
        memset(a,0,sizeof a);
        for(int b=1,c=i-1;b<c;b++,c--)
        {
            a[g[b]^g[c]]=true;
        }
        j=0;
        while(a[j])
            j++;
        g[i]=j;
    }
}

int main()
{
    grandy();
    int t,a,x,ans;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&a);
        ans=0;
        while(a--)
        {
            scanf("%d",&x);
            ans^=g[x];
        }
        ans ? printf("Case %d: Alice\n",i) : printf("Case %d: Bob\n",i);
    }
    return 0;
}
