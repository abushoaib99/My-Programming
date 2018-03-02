#include <bits/stdc++.h>
#define s 100001
using namespace std;

int arr[s], tree[s*3], I;

void init(int node,int u,int v)
{
    if(u==v)
    {
        tree[node]=arr[u];
        return;
    }
    int mid,left,right;
    mid=(u+v)/2;
    left=node*2;
    right=(node*2)+1;
    init(left,u,mid);
    init(right,mid+1,v);
    tree[node]=min(tree[left],tree[right]);
}

int query(int node,int u,int v)
{
    if(u>I || v<1)
        return INT_MAX;
    if(u>=1 && v<=I)
        return tree[node];
    if(u>v)
        return INT_MAX;

    int mid,left,right;
    mid=(u+v)/2;
    left=node*2;
    right=(node*2)+1;
    int x=query(left,u,mid);
    int y=query(right,mid+1,v);
    return min(x,y);
}

int main()
{
//    freopen("input.txt","r",stdin);
    int n,m,t;
    scanf("%d", &t);
    int sum;
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)
        scanf("%d",arr+i);
        init(1,1,n);
        for(int i=1;i<=n;i++)
            cout<<arr[i]<<' ';

        sum=0;
        for(int i=1;i<=m;i++){
            scanf("%d",&I);
            printf("%d\n",query(1,1,n));
        }
    }
    return 0;
}

