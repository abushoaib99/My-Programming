#include<bits/stdc++.h>
using namespace std;

int n,order[120][120],indegree[120],taken[120];

void topsort()
{
    vector<int>task;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(!taken[j] && !indegree[j])
            {
                taken[j]=1;
                task.push_back(j);
                for(int k=1;k<=n;k++)
                    if(order[j][k])
                        --indegree[k];
                break;
            }
        }
    }
    printf("%d",task[0]);
    for(int i=1;i<n;i++)
    printf(" %d",task[i]);
    printf("\n");
    task.clear();
}

int main()
{
    int a,b,m;
    while(scanf("%d%d",&n,&m) && (n+m))
    {
        while(m--)
        {
            cin>>a>>b;
            order[a][b]=1;
            indegree[b]++;
        }
        topsort();
        memset(order,0,sizeof order);
        memset(indegree,0,sizeof indegree);
        memset(taken,0,sizeof taken);
    }
    return 0;
}
