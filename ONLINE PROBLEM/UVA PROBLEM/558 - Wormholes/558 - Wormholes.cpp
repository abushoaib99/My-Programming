#include <bits/stdc++.h>
#define MAX 2005
#define INFTY 9999999
using namespace std;

vector< vector<int> > el;
vector<int> tmp(3);

int main()
{
    //freopen("input.txt","r",stdin);
    int t,v,e;
    int bestd[MAX];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&v,&e);
        for (int i=0;i<e;i++){
            cin>>tmp[0]>>tmp[1]>>tmp[2];
            el.push_back(tmp);
        }
        for (int i=0;i<MAX;i++)
            bestd[i]=INFTY;
        bestd[0]=0;
        bool f=false;
        for (int i=0;i<v;i++)
            for (int j=0;j<el.size();j++)
                bestd[el[j][1]]=min(bestd[el[j][1]],bestd[el[j][0]]+el[j][2]);

        for (int i=0;i<e;i++)
            if (bestd[el[i][1]] > bestd[el[i][0]]+el[i][2])
            {
                f=true;
                break;
            }

        if(f)
            printf("possible\n");
        else
            printf("not possible\n");

        el.clear();
    }
    return 0;
}

