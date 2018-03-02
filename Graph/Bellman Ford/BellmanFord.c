#include<stdio.h>
#define mx 2010
#define inf 9999999;
int Dis[mx],Node,Edge,a[mx],b[mx],c[mx];
int Belmanford()
{
    int i,j;
    for(i=0;i<=Node;i++)
        Dis[i]=inf;
    for(i=0;i<Node;i++)
        for(j=0;j<Edge;j++)
            if(Dis[b[j]]>Dis[a[j]]+c[j])
                Dis[b[j]]=Dis[a[j]]+c[j];

    for(i=0;i<Edge;i++)
        if(Dis[b[i]]>Dis[a[i]]+c[i])
            return 1;
    return 0;
}
int main()
{
    int i;
    scanf("%d %d",&Node,&Edge);
    for(i=0;i<Edge;i++)
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    if(Belmanford())
        printf("possible\n");
    else
        printf("not possible\n");
    return 0;
}
