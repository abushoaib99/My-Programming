#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
map<int,string>m1;
int n,order[120][120],indegree[120],taken[120];
int c;
void topsort()
{
    vector<int>task;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(!taken[j] && !indegree[j])
            {
                taken[j]=1;
                task.push_back(j);
                for(int k=0; k<n; k++)
                    if(order[j][k])
                        --indegree[k];
                break;
            }
        }
    }
    printf("Case #%d: Dilbert should drink beverages in this order:",c++);
    for(int i=0; i<n; i++)
    {
        cout<<" "<<m1[task[i]];
    }
    printf(".\n\n");
    task.clear();
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n1,x,y;
    c=1;
    string s,s1,s2;
    while(scanf("%d",&n)!=EOF)
    {
        m.clear();
        m1.clear();
        for(int i=0; i<n; i++)
        {
            cin>>s;
            m[s]=i;
            m1[i]=s;
        }
        scanf("%d",&n1);
        for(int i=0; i<n1; i++)
        {
            cin>>s1>>s2;
            x=m[s1];
            y=m[s2];
            if(order[x][y]!=1)
            {
                order[x][y]=1;
                indegree[y]++;
            }
        }
        topsort();
        memset(order,0,sizeof order);
        memset(indegree,0,sizeof indegree);
        memset(taken,0,sizeof taken);
    }
    return 0;
}

