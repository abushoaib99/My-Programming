#include<bits/stdc++.h>
using namespace std;
#define N 500
char s[4];
int parentArray[N];
int rankArray[N];
int disjointSetCount;

void MakeSet(int n)
{
    for(int i=0;i<n;++i){
        parentArray[i]=i;
    }
    disjointSetCount=n;
}

int FindSet(int x)
{
    return (x==parentArray[x])? x : FindSet(parentArray[x]);
}

void Union(int x,int y)
{
    int X=FindSet(x);
    int Y=FindSet(y);
    if(X==Y)
        return;
    else
        parentArray[Y]=X;

        --disjointSetCount;
}

int main()
{
    int n;
    int i,j;
    scanf("%d\n\n",&n);
    bool blank=false;
    while(n--)
    {
        char c=getchar();
        getchar();
        MakeSet(c-'A'+1);
        while(gets(s)&&strlen(s))
            Union( s[0]-'A',s[1]-'A');

        if(blank)
            putchar('\n');
        blank = true;
        printf("%d\n", disjointSetCount);
    }
    return 0;
}
